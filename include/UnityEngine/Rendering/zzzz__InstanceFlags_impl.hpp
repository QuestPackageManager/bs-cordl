#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceFlags.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceFlags::InstanceFlags(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceFlags::InstanceFlags() {}
constexpr ::UnityEngine::Rendering::InstanceFlags UnityEngine::Rendering::InstanceFlags::None{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::Rendering::InstanceFlags UnityEngine::Rendering::InstanceFlags::AffectsLightmaps{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::Rendering::InstanceFlags UnityEngine::Rendering::InstanceFlags::IsShadowsOff{ static_cast<uint8_t>(0x2u) };
constexpr ::UnityEngine::Rendering::InstanceFlags UnityEngine::Rendering::InstanceFlags::IsShadowsOnly{ static_cast<uint8_t>(0x4u) };
constexpr ::UnityEngine::Rendering::InstanceFlags UnityEngine::Rendering::InstanceFlags::HasProgressiveLod{ static_cast<uint8_t>(0x8u) };
constexpr ::UnityEngine::Rendering::InstanceFlags UnityEngine::Rendering::InstanceFlags::SmallMeshCulling{ static_cast<uint8_t>(0x10u) };
