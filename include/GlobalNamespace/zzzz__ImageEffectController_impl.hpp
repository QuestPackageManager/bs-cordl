#pragma once
// IWYU pragma private; include "GlobalNamespace/ImageEffectController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ImageEffectController_def.hpp"
#include "GlobalNamespace/zzzz__ImageEffectController_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::ImageEffectController_RenderImageCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x56b621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::ImageEffectController_RenderImageCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56b6364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::ImageEffectController_RenderImageCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56b6378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController_RenderImageCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController_RenderImageCallback::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::ImageEffectController_RenderImageCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56b63a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ImageEffectController_RenderImageCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::ImageEffectController_RenderImageCallback::Invoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline ::System::IAsyncResult* GlobalNamespace::ImageEffectController_RenderImageCallback::BeginInvoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest,
                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, src, dest, callback, object);
}
inline void GlobalNamespace::ImageEffectController_RenderImageCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::ImageEffectController_RenderImageCallback* GlobalNamespace::ImageEffectController_RenderImageCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ImageEffectController_RenderImageCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback::ImageEffectController_RenderImageCallback() {}
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController.SetCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController::*)(::GlobalNamespace::ImageEffectController_RenderImageCallback*)>(
    &::GlobalNamespace::ImageEffectController::SetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b61f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "SetCallback", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController.OnRenderImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::ImageEffectController::OnRenderImage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56b61fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "OnRenderImage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController::*)()>(&::GlobalNamespace::ImageEffectController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56b6218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback*& GlobalNamespace::ImageEffectController::__cordl_internal_get__renderImageCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderImageCallback;
}
constexpr ::GlobalNamespace::ImageEffectController_RenderImageCallback* const& GlobalNamespace::ImageEffectController::__cordl_internal_get__renderImageCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderImageCallback;
}
constexpr void GlobalNamespace::ImageEffectController::__cordl_internal_set__renderImageCallback(::GlobalNamespace::ImageEffectController_RenderImageCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderImageCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ImageEffectController::SetCallback(::GlobalNamespace::ImageEffectController_RenderImageCallback* renderImageCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "SetCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImageEffectController_RenderImageCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderImageCallback);
}
inline void GlobalNamespace::ImageEffectController::OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "OnRenderImage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline void GlobalNamespace::ImageEffectController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ImageEffectController* GlobalNamespace::ImageEffectController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ImageEffectController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageEffectController::ImageEffectController() {}
