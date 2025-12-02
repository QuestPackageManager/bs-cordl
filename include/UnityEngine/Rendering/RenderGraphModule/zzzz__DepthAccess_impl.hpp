#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/DepthAccess.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__DepthAccess_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::DepthAccess::DepthAccess(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DepthAccess::DepthAccess() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::DepthAccess UnityEngine::Rendering::RenderGraphModule::DepthAccess::Read{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::DepthAccess UnityEngine::Rendering::RenderGraphModule::DepthAccess::Write{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::DepthAccess UnityEngine::Rendering::RenderGraphModule::DepthAccess::ReadWrite{ static_cast<int32_t>(0x3) };
