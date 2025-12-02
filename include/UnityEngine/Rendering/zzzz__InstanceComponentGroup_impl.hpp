#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceComponentGroup.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceComponentGroup::InstanceComponentGroup(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceComponentGroup::InstanceComponentGroup() {}
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::Default{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::Wind{ static_cast<uint32_t>(0x2u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::LightProbe{ static_cast<uint32_t>(0x4u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::Lightmap{ static_cast<uint32_t>(0x8u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::DefaultWind{ static_cast<uint32_t>(0x3u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::DefaultLightProbe{ static_cast<uint32_t>(0x5u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::DefaultLightmap{ static_cast<uint32_t>(0x9u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::DefaultWindLightProbe{ static_cast<uint32_t>(0x7u) };
constexpr ::UnityEngine::Rendering::InstanceComponentGroup UnityEngine::Rendering::InstanceComponentGroup::DefaultWindLightmap{ static_cast<uint32_t>(0xbu) };
