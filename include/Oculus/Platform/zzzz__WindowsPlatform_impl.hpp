#pragma once
// IWYU pragma private; include "Oculus/Platform/WindowsPlatform.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__WindowsPlatform_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__WindowsPlatform_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform_UnityLogDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::WindowsPlatform_UnityLogDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Platform::WindowsPlatform_UnityLogDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5deb1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform_UnityLogDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::WindowsPlatform_UnityLogDelegate::*)(::System::IntPtr, ::System::IntPtr)>(
    &::Oculus::Platform::WindowsPlatform_UnityLogDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5deb254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform_UnityLogDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::Oculus::Platform::WindowsPlatform_UnityLogDelegate::*)(::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::Oculus::Platform::WindowsPlatform_UnityLogDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5deb268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform_UnityLogDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::WindowsPlatform_UnityLogDelegate::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::WindowsPlatform_UnityLogDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5deb2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::WindowsPlatform_UnityLogDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Oculus::Platform::WindowsPlatform_UnityLogDelegate::Invoke(::System::IntPtr tag, ::System::IntPtr msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, msg);
}
inline ::System::IAsyncResult* Oculus::Platform::WindowsPlatform_UnityLogDelegate::BeginInvoke(::System::IntPtr tag, ::System::IntPtr msg, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, tag, msg, callback, object);
}
inline void Oculus::Platform::WindowsPlatform_UnityLogDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Oculus::Platform::WindowsPlatform_UnityLogDelegate* Oculus::Platform::WindowsPlatform_UnityLogDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::WindowsPlatform_UnityLogDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::WindowsPlatform_UnityLogDelegate::WindowsPlatform_UnityLogDelegate() {}
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform.CPPLogCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::WindowsPlatform::*)(::System::IntPtr, ::System::IntPtr)>(&::Oculus::Platform::WindowsPlatform::CPPLogCallback)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5deb0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(),
                                                                                           { "CPPLogCallback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform.getCallbackPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Oculus::Platform::WindowsPlatform::*)()>(&::Oculus::Platform::WindowsPlatform::getCallbackPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5deb1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { "getCallbackPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::WindowsPlatform::*)(::StringW)>(&::Oculus::Platform::WindowsPlatform::Initialize)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ddcdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform.AsyncInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (::Oculus::Platform::WindowsPlatform::*)(::StringW)>(
    &::Oculus::Platform::WindowsPlatform::AsyncInitialize)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5ddc50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { "AsyncInitialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::WindowsPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::WindowsPlatform::*)()>(&::Oculus::Platform::WindowsPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ddc508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::WindowsPlatform::CPPLogCallback(::System::IntPtr tag, ::System::IntPtr message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { "CPPLogCallback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, message);
}
inline ::System::IntPtr Oculus::Platform::WindowsPlatform::getCallbackPointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { "getCallbackPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline bool Oculus::Platform::WindowsPlatform::Initialize(::StringW appId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, appId);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::WindowsPlatform::AsyncInitialize(::StringW appId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { "AsyncInitialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(this, ___internal_method, appId);
}
inline void Oculus::Platform::WindowsPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::WindowsPlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::WindowsPlatform* Oculus::Platform::WindowsPlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::WindowsPlatform*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::WindowsPlatform::WindowsPlatform() {}
