#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RendererListHandleType.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandleType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType::RendererListHandleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType::RendererListHandleType() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType UnityEngine::Rendering::RenderGraphModule::RendererListHandleType::Renderers{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType UnityEngine::Rendering::RenderGraphModule::RendererListHandleType::Legacy{ static_cast<int32_t>(0x1) };
