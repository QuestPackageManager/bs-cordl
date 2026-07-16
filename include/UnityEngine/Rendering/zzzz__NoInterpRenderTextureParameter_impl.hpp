#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpRenderTextureParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpRenderTextureParameter_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpRenderTextureParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpRenderTextureParameter::*)(::UnityEngine::RenderTexture*, bool)>(
    &::UnityEngine::Rendering::NoInterpRenderTextureParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67c8694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpRenderTextureParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpRenderTextureParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::NoInterpRenderTextureParameter::*)()>(
    &::UnityEngine::Rendering::NoInterpRenderTextureParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67c86f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpRenderTextureParameter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::NoInterpRenderTextureParameter*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::NoInterpRenderTextureParameter::_ctor(::UnityEngine::RenderTexture* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpRenderTextureParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline int32_t UnityEngine::Rendering::NoInterpRenderTextureParameter::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::NoInterpRenderTextureParameter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::NoInterpRenderTextureParameter* UnityEngine::Rendering::NoInterpRenderTextureParameter::New_ctor(::UnityEngine::RenderTexture* value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::NoInterpRenderTextureParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpRenderTextureParameter::NoInterpRenderTextureParameter() {}
