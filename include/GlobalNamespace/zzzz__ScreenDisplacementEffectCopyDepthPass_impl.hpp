#pragma once
// IWYU pragma private; include "GlobalNamespace\ScreenDisplacementEffectCopyDepthPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectCopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::*)(::UnityEngine::Shader*)>(
    &::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f4c484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f4df00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*>(), 11 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::_ctor(::UnityEngine::Shader* copyDepthShader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyDepthShader);
}
inline void GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                      ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass* GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::New_ctor(::UnityEngine::Shader* copyDepthShader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*>(copyDepthShader));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass::ScreenDisplacementEffectCopyDepthPass() {}
