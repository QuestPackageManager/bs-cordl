#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureUVOrigin.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureUVOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin::TextureUVOrigin(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin::TextureUVOrigin() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin::BottomLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin::TopLeft{ static_cast<int32_t>(0x1) };
