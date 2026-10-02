#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderTextureUVOriginStrategy.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTextureUVOriginStrategy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy::RenderTextureUVOriginStrategy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy::RenderTextureUVOriginStrategy() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy::BottomLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy::PropagateAttachmentOrientation{
  static_cast<int32_t>(0x1)
};
