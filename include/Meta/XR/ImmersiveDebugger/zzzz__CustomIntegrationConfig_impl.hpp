#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\CustomIntegrationConfig.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfig_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__CustomIntegrationConfig_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__ICustomIntegrationConfig_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a58e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a59078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a5908c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::*)(::System::IAsyncResult*)>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a590a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method, result);
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate::CustomIntegrationConfig_GetCameraDelegate() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a590b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a5911c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a59130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::*)(
    ::System::IAsyncResult*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5914c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, result);
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*
Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate::CustomIntegrationConfig_GetLeftControllerTransformDelegate() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a59158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::*)()>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a591c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a591d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::*)(
    ::System::IAsyncResult*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a591f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, result);
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*
Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate::CustomIntegrationConfig_GetRightControllerTransformDelegate() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.add_GetCameraHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*)>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::add_GetCameraHandler)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a58bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                             { "add_GetCameraHandler", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.remove_GetCameraHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*)>(
    &::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::remove_GetCameraHandler)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a58cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                             { "remove_GetCameraHandler", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.SetupAllConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::SetupAllConfig)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a58d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                                                           { "SetupAllConfig", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.ClearAllConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*)>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::ClearAllConfig)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a58f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                                                           { "ClearAllConfig", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig.GetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::GetCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a5900c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(), { "GetCamera", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::setStaticF_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*, "GetCameraHandler", ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(
      std::forward<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::getStaticF_GetCameraHandler() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*, "GetCameraHandler", ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>();
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::add_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                           { "add_GetCameraHandler", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::remove_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                           { "remove_GetCameraHandler", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::SetupAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig* customConfig) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                                                         { "SetupAllConfig", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customConfig);
}
inline void Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::ClearAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig* customConfig) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(),
                                                                                         { "ClearAllConfig", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customConfig);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::GetCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*>(), { "GetCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig::CustomIntegrationConfig() {}
