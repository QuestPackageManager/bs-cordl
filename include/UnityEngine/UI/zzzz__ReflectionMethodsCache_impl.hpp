#pragma once
// IWYU pragma private; include "UnityEngine/UI/ReflectionMethodsCache.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__ReflectionMethodsCache_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__ReflectionMethodsCache_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e0e4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(
    ::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::Invoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e0e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e0e56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(::by_ref<::UnityEngine::RaycastHit>, ::System::IAsyncResult*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e0e664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::Invoke(::UnityEngine::Ray r, ::by_ref<::UnityEngine::RaycastHit> hit, float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, r, hit, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::BeginInvoke(::UnityEngine::Ray r, ::by_ref<::UnityEngine::RaycastHit> hit, float_t f, int32_t i,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, r, hit, f, i, callback, object);
}
inline bool UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::EndInvoke(::by_ref<::UnityEngine::RaycastHit> hit, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::ReflectionMethodsCache_Raycast3DCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e0e688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::UnityEngine::Ray, float_t, int32_t)>(
    &::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e0e6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::UnityEngine::Ray, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e0e730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e0e7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::Invoke(::UnityEngine::Ray r, float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(this, ___internal_method, r, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, r, f, i, callback, object);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::ReflectionMethodsCache_RaycastAllCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e0e804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(
    ::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e0e870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e0e8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e0e978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit> results, float_t f, int32_t i) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r, results, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit> results, float_t f, int32_t i,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, r, results, f, i, callback, object);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::ReflectionMethodsCache_GetRaycastNonAllocCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e0e99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e0ea08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t,
                                                                                                                                                int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e0ea1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e0eaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::Invoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(this, ___internal_method, p1, p2, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::BeginInvoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, p1, p2, f, i, callback, object);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::ReflectionMethodsCache_Raycast2DCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e0eb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(
    ::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e0eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(::UnityEngine::Ray, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e0ebd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e0ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::Invoke(::UnityEngine::Ray r, float_t f, int32_t i) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(this, ___internal_method, r, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback,
                                                                                                                  ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, r, f, i, callback, object);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::ReflectionMethodsCache_GetRayIntersectionAllCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e0eca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(
    ::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e0ed10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t,
                                                                                                                             int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e0ed4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e0ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D> results, float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r, results, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D> results,
                                                                                                                          float_t f, int32_t i, ::System::AsyncCallback* callback,
                                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, r, results, f, i, callback, object);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*
UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache::*)()>(&::UnityEngine::UI::ReflectionMethodsCache::_ctor)> {
  constexpr static std::size_t size = 0xc98;
  constexpr static std::size_t addrs = 0x6e0d7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache.get_Singleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ReflectionMethodsCache* (*)()>(&::UnityEngine::UI::ReflectionMethodsCache::get_Singleton)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e0e448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache*>(), { "get_Singleton", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_raycast3D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycast3D;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* const& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_raycast3D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycast3D;
}
constexpr void UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_set_raycast3D(::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycast3D = value;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_raycast3DAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycast3DAll;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* const& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_raycast3DAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycast3DAll;
}
constexpr void UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_set_raycast3DAll(::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycast3DAll = value;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_getRaycastNonAlloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRaycastNonAlloc;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* const& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_getRaycastNonAlloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRaycastNonAlloc;
}
constexpr void UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_set_getRaycastNonAlloc(::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getRaycastNonAlloc = value;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_raycast2D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycast2D;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* const& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_raycast2D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycast2D;
}
constexpr void UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_set_raycast2D(::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycast2D = value;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_getRayIntersectionAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRayIntersectionAll;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* const& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_getRayIntersectionAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRayIntersectionAll;
}
constexpr void UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_set_getRayIntersectionAll(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getRayIntersectionAll = value;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_getRayIntersectionAllNonAlloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRayIntersectionAllNonAlloc;
}
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* const& UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_get_getRayIntersectionAllNonAlloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRayIntersectionAllNonAlloc;
}
constexpr void UnityEngine::UI::ReflectionMethodsCache::__cordl_internal_set_getRayIntersectionAllNonAlloc(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getRayIntersectionAllNonAlloc = value;
}
inline void UnityEngine::UI::ReflectionMethodsCache::setStaticF_s_ReflectionMethodsCache(::UnityEngine::UI::ReflectionMethodsCache* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::ReflectionMethodsCache*, "s_ReflectionMethodsCache", ::UnityEngine::UI::ReflectionMethodsCache*>(
      std::forward<::UnityEngine::UI::ReflectionMethodsCache*>(value));
}
inline ::UnityEngine::UI::ReflectionMethodsCache* UnityEngine::UI::ReflectionMethodsCache::getStaticF_s_ReflectionMethodsCache() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::ReflectionMethodsCache*, "s_ReflectionMethodsCache", ::UnityEngine::UI::ReflectionMethodsCache*>();
}
inline void UnityEngine::UI::ReflectionMethodsCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::ReflectionMethodsCache* UnityEngine::UI::ReflectionMethodsCache::get_Singleton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ReflectionMethodsCache*>(), { "get_Singleton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ReflectionMethodsCache*>(nullptr, ___internal_method);
}
inline ::UnityEngine::UI::ReflectionMethodsCache* UnityEngine::UI::ReflectionMethodsCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ReflectionMethodsCache*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache::ReflectionMethodsCache() {}
