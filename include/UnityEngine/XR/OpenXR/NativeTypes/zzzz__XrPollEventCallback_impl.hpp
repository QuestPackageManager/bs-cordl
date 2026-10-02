#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrPollEventCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPollEventCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEventDataBaseHeader_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3ca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3caac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader*, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3cac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3cae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::Invoke(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader* eventData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::BeginInvoke(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader* eventData,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eventData, callback, object);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback::XrPollEventCallback() {}
