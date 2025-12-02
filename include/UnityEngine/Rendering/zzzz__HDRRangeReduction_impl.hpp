#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDRRangeReduction.hpp"
#include "UnityEngine/Rendering/zzzz__HDRRangeReduction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::HDRRangeReduction::HDRRangeReduction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDRRangeReduction::HDRRangeReduction() {}
constexpr ::UnityEngine::Rendering::HDRRangeReduction UnityEngine::Rendering::HDRRangeReduction::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::HDRRangeReduction UnityEngine::Rendering::HDRRangeReduction::Reinhard{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::HDRRangeReduction UnityEngine::Rendering::HDRRangeReduction::BT2390{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::HDRRangeReduction UnityEngine::Rendering::HDRRangeReduction::ACES1000Nits{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::HDRRangeReduction UnityEngine::Rendering::HDRRangeReduction::ACES2000Nits{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::HDRRangeReduction UnityEngine::Rendering::HDRRangeReduction::ACES4000Nits{ static_cast<int32_t>(0x5) };
