#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureSizeMode.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureSizeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode::TextureSizeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode::TextureSizeMode() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode UnityEngine::Rendering::RenderGraphModule::TextureSizeMode::Explicit{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode UnityEngine::Rendering::RenderGraphModule::TextureSizeMode::Scale{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode UnityEngine::Rendering::RenderGraphModule::TextureSizeMode::Functor{ static_cast<int32_t>(0x2) };
