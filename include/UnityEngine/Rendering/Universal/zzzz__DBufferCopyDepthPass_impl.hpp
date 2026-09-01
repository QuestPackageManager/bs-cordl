#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DBufferCopyDepthPass.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferCopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferCopyDepthPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Shader*, bool, bool, bool)>(&::UnityEngine::Rendering::Universal::DBufferCopyDepthPass::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6853644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferCopyDepthPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::DBufferCopyDepthPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6853650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*>(), 11 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DBufferCopyDepthPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader, bool shouldClear,
                                                                           bool copyToDepth, bool copyResolvedDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, copyDepthShader, shouldClear, copyToDepth, copyResolvedDepth);
}
inline void UnityEngine::Rendering::Universal::DBufferCopyDepthPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* UnityEngine::Rendering::Universal::DBufferCopyDepthPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                    ::UnityEngine::Shader* copyDepthShader, bool shouldClear,
                                                                                                                                    bool copyToDepth, bool copyResolvedDepth) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*>(evt, copyDepthShader, shouldClear, copyToDepth, copyResolvedDepth));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass::DBufferCopyDepthPass() {}
