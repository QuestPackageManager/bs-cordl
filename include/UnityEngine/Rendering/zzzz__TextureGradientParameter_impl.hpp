#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureGradientParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureGradientParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureGradient_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradientParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradientParameter::*)(::UnityEngine::Rendering::TextureGradient*, bool)>(
    &::UnityEngine::Rendering::TextureGradientParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67c3a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradientParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::TextureGradient*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradientParameter.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradientParameter::*)()>(&::UnityEngine::Rendering::TextureGradientParameter::Release)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c3ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradientParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::TextureGradientParameter*>(), 11 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::TextureGradientParameter::_ctor(::UnityEngine::Rendering::TextureGradient* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradientParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::TextureGradient*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::TextureGradientParameter::Release() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::TextureGradientParameter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::TextureGradientParameter* UnityEngine::Rendering::TextureGradientParameter::New_ctor(::UnityEngine::Rendering::TextureGradient* value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureGradientParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureGradientParameter::TextureGradientParameter() {}
