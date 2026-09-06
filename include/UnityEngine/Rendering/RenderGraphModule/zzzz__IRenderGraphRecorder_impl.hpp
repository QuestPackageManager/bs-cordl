#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderGraphRecorder.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphRecorder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                               ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
