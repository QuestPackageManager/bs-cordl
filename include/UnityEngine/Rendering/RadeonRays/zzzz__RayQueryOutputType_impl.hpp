#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RayQueryOutputType.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RayQueryOutputType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryOutputType::RayQueryOutputType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryOutputType::RayQueryOutputType() {}
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryOutputType UnityEngine::Rendering::RadeonRays::RayQueryOutputType::FullHitData{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryOutputType UnityEngine::Rendering::RadeonRays::RayQueryOutputType::InstanceID{ static_cast<int32_t>(0x1) };
