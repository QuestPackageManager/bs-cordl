#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPassType.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType::RenderGraphPassType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType::RenderGraphPassType() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType::Legacy{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType::Unsafe{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType::Raster{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType::Compute{ static_cast<int32_t>(0x3) };
