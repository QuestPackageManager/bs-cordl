#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXRenderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXRenderer::*)()>(&::UnityEngine::VFX::VFXRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72cb3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VFXRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXRenderer* UnityEngine::VFX::VFXRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VFXRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXRenderer::VFXRenderer() {}
