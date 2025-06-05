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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ad0ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(
    ::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::Invoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4ad0f80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4ad0fc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::*)(
    ::ByRef<::UnityEngine::RaycastHit>, ::System::IAsyncResult*)>(&::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4ad10e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::Invoke(::UnityEngine::Ray r, ::ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r, hit, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::BeginInvoke(::UnityEngine::Ray r, ::ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, r, hit, f, i, callback, object);
}
inline bool UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::EndInvoke(::ByRef<::UnityEngine::RaycastHit> hit, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hit, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback::ReflectionMethodsCache_Raycast3DCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ad1110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> (
    ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4ad119c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::UnityEngine::Ray, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4ad11d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> (
    ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::*)(::System::IAsyncResult*)>(&::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4ad12c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::Invoke(::UnityEngine::Ray r, float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>, false>(this, ___internal_method, r, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, r, f, i, callback, object);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>, false>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback::ReflectionMethodsCache_RaycastAllCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ad12d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(
    ::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4ad1360;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t,
                                                                             ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4ad139c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::*)(::System::IAsyncResult*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4ad1490;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                                                                          float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, r, results, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::BeginInvoke(::UnityEngine::Ray r,
                                                                                                               ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                                                                                               float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, r, results, f, i, callback, object);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback::ReflectionMethodsCache_GetRaycastNonAllocCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ad14b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4ad1544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4ad1558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4ad165c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::Invoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D, false>(this, ___internal_method, p1, p2, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::BeginInvoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, p1, p2, f, i, callback, object);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D, false>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::ReflectionMethodsCache_Raycast2DCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ad1694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> (
    ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(::UnityEngine::Ray, float_t, int32_t)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4ad1720;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(::UnityEngine::Ray, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4ad175c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> (
    ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::*)(::System::IAsyncResult*)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4ad184c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::Invoke(::UnityEngine::Ray r, float_t f,
                                                                                                                                                                  int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>, false>(this, ___internal_method, r, f, i);
}
inline ::System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback,
                                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, r, f, i, callback, object);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>, false>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback::ReflectionMethodsCache_GetRayIntersectionAllCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4ad1858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(
    ::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>, float_t, int32_t)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4ad18e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>, float_t,
                                                                                        int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4ad1920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4ad1a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::Invoke(::UnityEngine::Ray r,
                                                                                                     ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t f,
                                                                                                     int32_t i) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, r, results, f, i);
}
inline ::System::IAsyncResult*
UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results,
                                                                                           float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, r, results, f, i, callback, object);
}
inline int32_t UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*
UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ReflectionMethodsCache::*)()>(&::UnityEngine::UI::ReflectionMethodsCache::_ctor)> {
  constexpr static std::size_t size = 0xc14;
  constexpr static std::size_t addrs = 0x4ad026c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ReflectionMethodsCache.get_Singleton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ReflectionMethodsCache* (*)()>(&::UnityEngine::UI::ReflectionMethodsCache::get_Singleton)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4ad0e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache*>::get(),
                                                                               "get_Singleton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___raycast3D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___raycast3DAll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getRaycastNonAlloc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___raycast2D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getRayIntersectionAll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getRayIntersectionAllNonAlloc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UI::ReflectionMethodsCache::setStaticF_s_ReflectionMethodsCache(::UnityEngine::UI::ReflectionMethodsCache* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::ReflectionMethodsCache*, "s_ReflectionMethodsCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache*>::get>(
      std::forward<::UnityEngine::UI::ReflectionMethodsCache*>(value));
}
inline ::UnityEngine::UI::ReflectionMethodsCache* UnityEngine::UI::ReflectionMethodsCache::getStaticF_s_ReflectionMethodsCache() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::ReflectionMethodsCache*, "s_ReflectionMethodsCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache*>::get>();
}
inline void UnityEngine::UI::ReflectionMethodsCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::ReflectionMethodsCache* UnityEngine::UI::ReflectionMethodsCache::get_Singleton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ReflectionMethodsCache*>::get(), "get_Singleton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ReflectionMethodsCache*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::UI::ReflectionMethodsCache* UnityEngine::UI::ReflectionMethodsCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ReflectionMethodsCache*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ReflectionMethodsCache::ReflectionMethodsCache() {}
