#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphParameters.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "executionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "rendererListCulling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scriptableRenderContext", ty: "::UnityEngine::Rendering::ScriptableRenderContext",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "commandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "invalidContextForTesting", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters::RenderGraphParameters(::StringW executionName, int32_t currentFrameIndex, bool rendererListCulling,
                                                                                                    ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext,
                                                                                                    ::UnityEngine::Rendering::CommandBuffer* commandBuffer, bool invalidContextForTesting) noexcept {
  this->executionName = executionName;
  this->currentFrameIndex = currentFrameIndex;
  this->rendererListCulling = rendererListCulling;
  this->scriptableRenderContext = scriptableRenderContext;
  this->commandBuffer = commandBuffer;
  this->invalidContextForTesting = invalidContextForTesting;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters::RenderGraphParameters() {}
