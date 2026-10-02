#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateCombiner.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::ShadingRateCombiner::ShadingRateCombiner(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadingRateCombiner::ShadingRateCombiner() {}
constexpr ::UnityEngine::Rendering::ShadingRateCombiner UnityEngine::Rendering::ShadingRateCombiner::Keep{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ShadingRateCombiner UnityEngine::Rendering::ShadingRateCombiner::Override{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ShadingRateCombiner UnityEngine::Rendering::ShadingRateCombiner::Min{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::ShadingRateCombiner UnityEngine::Rendering::ShadingRateCombiner::Max{ static_cast<int32_t>(0x3) };
