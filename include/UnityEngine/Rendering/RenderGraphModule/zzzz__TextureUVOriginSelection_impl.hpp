#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureUVOriginSelection.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureUVOriginSelection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection::TextureUVOriginSelection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection::TextureUVOriginSelection() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection::BottomLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection::TopLeft{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection::Unknown{ static_cast<int32_t>(0x2) };
