#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/ExtendedFeatureFlags.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags::ExtendedFeatureFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags::ExtendedFeatureFlags() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags::TileProperties{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags::MultiviewRenderRegionsCompatible{ static_cast<int32_t>(
    0x2) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags::MultisampledShaderResolve{ static_cast<int32_t>(0x4) };
