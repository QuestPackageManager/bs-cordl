#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphParameters.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTextureUVOriginStrategy_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "executionName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "executionId", ty: "::UnityEngine::EntityId", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "generateDebugData", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentFrameIndex", ty:
// "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererListCulling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "scriptableRenderContext", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandBuffer", ty:
// "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "invalidContextForTesting", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "renderTextureUVOriginStrategy", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters::RenderGraphParameters(
    ::StringW executionName, ::UnityEngine::EntityId executionId, bool generateDebugData, int32_t currentFrameIndex, bool rendererListCulling,
    ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer* commandBuffer, bool invalidContextForTesting,
    ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy renderTextureUVOriginStrategy) noexcept {
  this->executionName = executionName;
  this->executionId = executionId;
  this->generateDebugData = generateDebugData;
  this->currentFrameIndex = currentFrameIndex;
  this->rendererListCulling = rendererListCulling;
  this->scriptableRenderContext = scriptableRenderContext;
  this->commandBuffer = commandBuffer;
  this->invalidContextForTesting = invalidContextForTesting;
  this->renderTextureUVOriginStrategy = renderTextureUVOriginStrategy;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters::RenderGraphParameters() {}
