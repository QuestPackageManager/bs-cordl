#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\Features\Mock\MockRuntime.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a0e2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, uint64_t)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a0e30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, uint64_t, ::System::AsyncCallback*,
                                                                                   ::System::Object*)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6a0e320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a0e3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::Invoke(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt, uint64_t param) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, param);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::BeginInvoke(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt,
                                                                                                                     uint64_t param, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, evt, param, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate::MockRuntime_ScriptEventDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a0d504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a0e3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a0e3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a0e404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::Invoke(::StringW functionName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(this, ___internal_method, functionName);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::BeginInvoke(::StringW functionName, ::System::AsyncCallback* callback,
                                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, functionName, callback, object);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate::MockRuntime_BeforeFunctionDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a0d580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(
    ::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a0e428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a0e43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a0e4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::Invoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, functionName, result);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::BeginInvoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result,
                                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, functionName, result, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate::MockRuntime_AfterFunctionDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.add_onScriptEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a0ce54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "add_onScriptEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.remove_onScriptEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a0cf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "remove_onScriptEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime> (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a0cff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ReceiveScriptEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a0cd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                { "ReceiveScriptEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.BeforeFunctionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a0cdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "BeforeFunctionCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.AfterFunctionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a0ce0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "AfterFunctionCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6a0d170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "SetFunctionCallback",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a0d698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                            { "SetFunctionCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a0d6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                            { "SetFunctionCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetBeforeFunctionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a0d048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "GetBeforeFunctionCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetAfterFunctionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a0d0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "GetAfterFunctionCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ClearFunctionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a0d6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "ClearFunctionCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ResetDefaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a0d744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "ResetDefaults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a0d790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.HookCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a0d794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "HookCreateInstance", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetKeepFunctionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a0d80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "SetKeepFunctionCallbacks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                ::UnityEngine::Vector4)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6a0d888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "SetViewPose",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a0d974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                            { "SetViewState",
                              {},
                              { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a0d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "SetSpace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6a0dad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "SetSpace",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_RegisterScriptEventCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a0dbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                { "Internal_RegisterScriptEventCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_TransitionToState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, bool)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a0dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                { "Internal_TransitionToState", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_GetSessionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState (*)()>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a0dcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "Internal_GetSessionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.RequestExitSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a0dd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "RequestExitSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.CauseInstanceLoss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a0dd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "CauseInstanceLoss", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.CauseUserPresenceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseUserPresenceChange)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a0dddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "CauseUserPresenceChange", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetReferenceSpaceBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, ::UnityEngine::Vector2)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a0de58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                            { "SetReferenceSpaceBounds", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetEndFrameStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a0deec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                                                           { "GetEndFrameStats", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ActivateSecondaryView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, bool)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a0df70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                { "ActivateSecondaryView", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.MockRuntime_RegisterFunctionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a0d600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                                                           { "MockRuntime_RegisterFunctionCallbacks",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.MetaPerformanceMetrics_SeedCounterOnce_Float
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, float_t, uint32_t)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MetaPerformanceMetrics_SeedCounterOnce_Float)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a0dff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                { "MetaPerformanceMetrics_SeedCounterOnce_Float", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.PerformanceSettings_CauseNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain,
                                                                ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain,
                                                                ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_CauseNotification)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a0e098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                             { "PerformanceSettings_CauseNotification",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.PerformanceSettings_GetPerformanceLevelHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint (*)(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_GetPerformanceLevelHint)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a0e12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                            { "PerformanceSettings_GetPerformanceLevelHint", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_IsAndroidThreadTypeRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_IsAndroidThreadTypeRegistered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a0e1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                                                           { "Internal_IsAndroidThreadTypeRegistered", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_GetRegisteredAndroidThreadsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetRegisteredAndroidThreadsCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a0e22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "Internal_GetRegisteredAndroidThreadsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.IsAndroidThreadTypeRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::IsAndroidThreadTypeRegistered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a0e290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "IsAndroidThreadTypeRegistered", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetRegisteredAndroidThreadsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetRegisteredAndroidThreadsCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a0e294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "GetRegisteredAndroidThreadsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { ".ctor", {}, {} })));
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
                                    ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>*
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_s_AfterFunctionCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>*,
                                           "s_AfterFunctionCallbacks", ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_s_BeforeFunctionCallbacks(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*,
                                    "s_BeforeFunctionCallbacks", ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_s_BeforeFunctionCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>*,
                                           "s_BeforeFunctionCallbacks", ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*, "onScriptEvent", ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(
      std::forward<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>(value));
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_onScriptEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*, "onScriptEvent", ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "add_onScriptEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "remove_onScriptEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime> UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt, uint64_t param) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                              { "ReceiveScriptEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, param);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback(::StringW function) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "BeforeFunctionCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, function);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "AfterFunctionCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, function, result);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* beforeCallback,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* afterCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "SetFunctionCallback",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, function, beforeCallback, afterCallback);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* beforeCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                          { "SetFunctionCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, function, beforeCallback);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* afterCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                          { "SetFunctionCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, function, afterCallback);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback(::StringW function) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "GetBeforeFunctionCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(nullptr, ___internal_method, function);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback(::StringW function) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "GetAfterFunctionCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>(nullptr, ___internal_method, function);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "ClearFunctionCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "ResetDefaults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy(uint64_t instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance(::System::IntPtr func) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "HookCreateInstance", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "SetKeepFunctionCallbacks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, int32_t viewIndex,
                                                                              ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector4 fov) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "SetViewPose",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewConfigurationType, viewIndex, position, orientation, fov);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType,
                                                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags viewStateFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
          { "SetViewState", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewConfigurationType, viewStateFlags);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector3 position,
                                                                           ::UnityEngine::Quaternion orientation, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "SetSpace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, referenceSpace, position, orientation, locationFlags);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(uint64_t actionHandle, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "SetSpace",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actionHandle, position, orientation, locationFlags);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                              { "Internal_RegisterScriptEventCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(nullptr, ___internal_method, callback);
}
inline bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState state, bool forceTransition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                              { "Internal_TransitionToState", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, forceTransition);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "Internal_GetSessionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "RequestExitSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "CauseInstanceLoss", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseUserPresenceChange(bool hasUserPresent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "CauseUserPresenceChange", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hasUserPresent);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector2 bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                          { "SetReferenceSpaceBounds", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, referenceSpace, bounds);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats(::by_ref<int32_t> primaryLayerCount, ::by_ref<int32_t> secondaryLayerCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                                                         { "GetEndFrameStats", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, primaryLayerCount, secondaryLayerCount);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, bool activate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                              { "ActivateSecondaryView", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewConfigurationType, activate);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* hookBefore,
                                                                                                        ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* hookAfter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                                                         { "MockRuntime_RegisterFunctionCallbacks",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>(),
                                                                                             ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hookBefore, hookAfter);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MetaPerformanceMetrics_SeedCounterOnce_Float(::StringW xrPathString, float_t value, uint32_t unit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                              { "MetaPerformanceMetrics_SeedCounterOnce_Float", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xrPathString, value, unit);
}
inline void
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_CauseNotification(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain,
                                                                                            ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain subDomain,
                                                                                            ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                                                           { "PerformanceSettings_CauseNotification",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, domain, subDomain, level);
}
inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::PerformanceSettings_GetPerformanceLevelHint(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(),
                          { "PerformanceSettings_GetPerformanceLevelHint", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint>(nullptr, ___internal_method, domain);
}
inline bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_IsAndroidThreadTypeRegistered(uint32_t threadType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "Internal_IsAndroidThreadTypeRegistered", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, threadType);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetRegisteredAndroidThreadsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "Internal_GetRegisteredAndroidThreadsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::IsAndroidThreadTypeRegistered(uint32_t threadType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "IsAndroidThreadTypeRegistered", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, threadType);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetRegisteredAndroidThreadsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { "GetRegisteredAndroidThreadsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime() {}
