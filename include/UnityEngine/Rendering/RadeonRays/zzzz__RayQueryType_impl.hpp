#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RayQueryType.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RayQueryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryType::RayQueryType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryType::RayQueryType() {}
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryType UnityEngine::Rendering::RadeonRays::RayQueryType::ClosestHit{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RadeonRays::RayQueryType UnityEngine::Rendering::RadeonRays::RayQueryType::AnyHit{ static_cast<int32_t>(0x1) };
