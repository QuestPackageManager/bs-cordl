#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ImageEffectController_def.hpp"
#include "GlobalNamespace/zzzz__ImageEffectController_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ImageEffectController__RenderImageCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ImageEffectController__RenderImageCallback::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ImageEffectController__RenderImageCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x210c198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ImageEffectController__RenderImageCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ImageEffectController__RenderImageCallback::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::__ImageEffectController__RenderImageCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x210c2c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ImageEffectController__RenderImageCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__ImageEffectController__RenderImageCallback::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__ImageEffectController__RenderImageCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x210c2dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ImageEffectController__RenderImageCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ImageEffectController__RenderImageCallback::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ImageEffectController__RenderImageCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x210c304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ImageEffectController__RenderImageCallback* GlobalNamespace::__ImageEffectController__RenderImageCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>(object, method));
}
inline void GlobalNamespace::__ImageEffectController__RenderImageCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ImageEffectController__RenderImageCallback::Invoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline ::System::IAsyncResult* GlobalNamespace::__ImageEffectController__RenderImageCallback::BeginInvoke(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest,
                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, src, dest, callback, object);
}
inline void GlobalNamespace::__ImageEffectController__RenderImageCallback::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ImageEffectController__RenderImageCallback::__ImageEffectController__RenderImageCallback() {}
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController.SetCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController::*)(::GlobalNamespace::__ImageEffectController__RenderImageCallback*)>(
    &::GlobalNamespace::ImageEffectController::SetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210c16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "SetCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController.OnRenderImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::ImageEffectController::OnRenderImage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x210c174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "OnRenderImage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageEffectController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageEffectController::*)()>(&::GlobalNamespace::ImageEffectController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210c190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__ImageEffectController__RenderImageCallback*& GlobalNamespace::ImageEffectController::__get__renderImageCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderImageCallback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImageEffectController__RenderImageCallback*> const& GlobalNamespace::ImageEffectController::__get__renderImageCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderImageCallback;
}
constexpr void GlobalNamespace::ImageEffectController::__set__renderImageCallback(::GlobalNamespace::__ImageEffectController__RenderImageCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderImageCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ImageEffectController::SetCallback(::GlobalNamespace::__ImageEffectController__RenderImageCallback* renderImageCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "SetCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImageEffectController__RenderImageCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderImageCallback);
}
inline void GlobalNamespace::ImageEffectController::OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), "OnRenderImage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline ::GlobalNamespace::ImageEffectController* GlobalNamespace::ImageEffectController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ImageEffectController*>());
}
inline void GlobalNamespace::ImageEffectController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageEffectController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageEffectController::ImageEffectController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
