#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RenderTextureFromPostEffect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect.get_targetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (::GlobalNamespace::RenderTextureFromPostEffect::*)()>(
    &::GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280ad54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(),
                                                                               "get_targetTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderTextureFromPostEffect::*)()>(&::GlobalNamespace::RenderTextureFromPostEffect::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x280ad5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect.OnRenderImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderTextureFromPostEffect::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x280adac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(), "OnRenderImage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderTextureFromPostEffect::*)()>(&::GlobalNamespace::RenderTextureFromPostEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280afa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RenderTexture*& GlobalNamespace::RenderTextureFromPostEffect::__get__targetTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& GlobalNamespace::RenderTextureFromPostEffect::__get__targetTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTexture;
}
constexpr void GlobalNamespace::RenderTextureFromPostEffect::__set__targetTexture(::UnityEngine::RenderTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::RenderTextureFromPostEffect::__get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::RenderTextureFromPostEffect::__get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::RenderTextureFromPostEffect::__set__camera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::RenderTexture* GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(),
                                                                             "get_targetTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RenderTextureFromPostEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dst) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(), "OnRenderImage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst);
}
inline ::GlobalNamespace::RenderTextureFromPostEffect* GlobalNamespace::RenderTextureFromPostEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RenderTextureFromPostEffect*>());
}
inline void GlobalNamespace::RenderTextureFromPostEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderTextureFromPostEffect::RenderTextureFromPostEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
