#pragma once
// IWYU pragma private; include "UnityEngine\CustomRenderTextureManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CustomRenderTextureManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__CustomRenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::CustomRenderTextureManager.InvokeOnTextureLoaded_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&::UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a84220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                                                                                           { "InvokeOnTextureLoaded_Internal", {}, { ::i2c::type_of<::UnityEngine::CustomRenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTextureManager.InvokeOnTextureUnloaded_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&::UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a84290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                                                                                           { "InvokeOnTextureUnloaded_Internal", {}, { ::i2c::type_of<::UnityEngine::CustomRenderTexture*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::CustomRenderTextureManager::setStaticF_textureLoaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureLoaded", ::UnityEngine::CustomRenderTextureManager*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* UnityEngine::CustomRenderTextureManager::getStaticF_textureLoaded() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureLoaded", ::UnityEngine::CustomRenderTextureManager*>();
}
inline void UnityEngine::CustomRenderTextureManager::setStaticF_textureUnloaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureUnloaded", ::UnityEngine::CustomRenderTextureManager*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* UnityEngine::CustomRenderTextureManager::getStaticF_textureUnloaded() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureUnloaded", ::UnityEngine::CustomRenderTextureManager*>();
}
inline void UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal(::UnityEngine::CustomRenderTexture* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                                                                                         { "InvokeOnTextureLoaded_Internal", {}, { ::i2c::type_of<::UnityEngine::CustomRenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal(::UnityEngine::CustomRenderTexture* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                                                                                         { "InvokeOnTextureUnloaded_Internal", {}, { ::i2c::type_of<::UnityEngine::CustomRenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::UnityEngine::CustomRenderTextureManager::CustomRenderTextureManager() {}
