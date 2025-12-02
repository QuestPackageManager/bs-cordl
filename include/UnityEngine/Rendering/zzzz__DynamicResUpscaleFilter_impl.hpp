#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicResUpscaleFilter.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResUpscaleFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter::DynamicResUpscaleFilter(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter::DynamicResUpscaleFilter() {}
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter UnityEngine::Rendering::DynamicResUpscaleFilter::Bilinear{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter UnityEngine::Rendering::DynamicResUpscaleFilter::CatmullRom{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter UnityEngine::Rendering::DynamicResUpscaleFilter::Lanczos{ static_cast<uint8_t>(0x2u) };
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter UnityEngine::Rendering::DynamicResUpscaleFilter::ContrastAdaptiveSharpen{ static_cast<uint8_t>(0x3u) };
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter UnityEngine::Rendering::DynamicResUpscaleFilter::EdgeAdaptiveScalingUpres{ static_cast<uint8_t>(0x4u) };
constexpr ::UnityEngine::Rendering::DynamicResUpscaleFilter UnityEngine::Rendering::DynamicResUpscaleFilter::TAAU{ static_cast<uint8_t>(0x5u) };
