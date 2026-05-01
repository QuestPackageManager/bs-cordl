#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Downsampling.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Downsampling::Downsampling(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Downsampling::Downsampling() {}
constexpr ::UnityEngine::Rendering::Universal::Downsampling UnityEngine::Rendering::Universal::Downsampling::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::Downsampling UnityEngine::Rendering::Universal::Downsampling::_2xBilinear{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::Downsampling UnityEngine::Rendering::Universal::Downsampling::_4xBox{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::Downsampling UnityEngine::Rendering::Universal::Downsampling::_4xBilinear{ static_cast<int32_t>(0x3) };
