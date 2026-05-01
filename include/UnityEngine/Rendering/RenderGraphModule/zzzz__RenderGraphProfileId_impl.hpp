#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphProfileId.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphProfileId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId::RenderGraphProfileId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId::RenderGraphProfileId() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId::CompileRenderGraph{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId::ExecuteRenderGraph{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId::ComputeHashRenderGraph{ static_cast<int32_t>(0x2) };
