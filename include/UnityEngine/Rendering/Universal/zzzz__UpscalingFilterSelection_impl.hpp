#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UpscalingFilterSelection.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UpscalingFilterSelection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection::UpscalingFilterSelection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection::UpscalingFilterSelection() {}
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection UnityEngine::Rendering::Universal::UpscalingFilterSelection::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection UnityEngine::Rendering::Universal::UpscalingFilterSelection::Linear{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection UnityEngine::Rendering::Universal::UpscalingFilterSelection::Point{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection UnityEngine::Rendering::Universal::UpscalingFilterSelection::FSR{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection UnityEngine::Rendering::Universal::UpscalingFilterSelection::STP{ static_cast<int32_t>(0x4) };
