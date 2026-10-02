#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BuildFlags.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BuildFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::BuildFlags::BuildFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BuildFlags::BuildFlags() {}
constexpr ::UnityEngine::Rendering::RadeonRays::BuildFlags UnityEngine::Rendering::RadeonRays::BuildFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RadeonRays::BuildFlags UnityEngine::Rendering::RadeonRays::BuildFlags::PreferFastBuild{ static_cast<int32_t>(0x1) };
