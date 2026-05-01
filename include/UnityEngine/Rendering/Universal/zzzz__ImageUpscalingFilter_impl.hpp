#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ImageUpscalingFilter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter::ImageUpscalingFilter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter::ImageUpscalingFilter() {}
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter UnityEngine::Rendering::Universal::ImageUpscalingFilter::Linear{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter UnityEngine::Rendering::Universal::ImageUpscalingFilter::Point{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter UnityEngine::Rendering::Universal::ImageUpscalingFilter::FSR{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter UnityEngine::Rendering::Universal::ImageUpscalingFilter::STP{ static_cast<int32_t>(0x3) };
