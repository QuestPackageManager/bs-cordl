#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderRequestBatcherContext.hpp"
#include "UnityEngine/Rendering/zzzz__RenderRequestBatcherContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "commandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderRequestBatcherContext::RenderRequestBatcherContext(::UnityEngine::Rendering::CommandBuffer* commandBuffer) noexcept {
  this->commandBuffer = commandBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderRequestBatcherContext::RenderRequestBatcherContext() {}
