#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContextHandles.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextHandles_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextHandles.UseForOcclusionTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextHandles::*)(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(
    &::UnityEngine::Rendering::IndirectBufferContextHandles::UseForOcclusionTest)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x682a51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextHandles>(),
                                                             { "UseForOcclusionTest", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IndirectBufferContextHandles::UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextHandles>(),
                                                           { "UseForOcclusionTest", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
// Ctor Parameters [CppParam { name: "instanceBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceInfoBuffer",
// ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "argsBuffer", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInfoBuffer", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles::IndirectBufferContextHandles(::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceBuffer,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceInfoBuffer,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::BufferHandle argsBuffer,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawInfoBuffer) noexcept {
  this->instanceBuffer = instanceBuffer;
  this->instanceInfoBuffer = instanceInfoBuffer;
  this->argsBuffer = argsBuffer;
  this->drawInfoBuffer = drawInfoBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles::IndirectBufferContextHandles() {}
