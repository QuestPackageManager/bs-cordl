#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResourceType.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType::RenderGraphResourceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType::RenderGraphResourceType() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType::Texture{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType::Buffer{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType::AccelerationStructure{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType::Count{ static_cast<int32_t>(0x3) };
