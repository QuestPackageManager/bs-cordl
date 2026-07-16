#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SceneRenderPipeline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SceneRenderPipeline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SceneRenderPipeline._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SceneRenderPipeline::*)()>(&::UnityEngine::Rendering::SceneRenderPipeline::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c2928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SceneRenderPipeline*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SceneRenderPipeline::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SceneRenderPipeline*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SceneRenderPipeline* UnityEngine::Rendering::SceneRenderPipeline::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SceneRenderPipeline*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SceneRenderPipeline::SceneRenderPipeline() {}
