#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FoveatedRenderingMode.hpp"
#include "UnityEngine/Rendering/zzzz__FoveatedRenderingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FoveatedRenderingMode::FoveatedRenderingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FoveatedRenderingMode::FoveatedRenderingMode() {}
constexpr ::UnityEngine::Rendering::FoveatedRenderingMode UnityEngine::Rendering::FoveatedRenderingMode::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::FoveatedRenderingMode UnityEngine::Rendering::FoveatedRenderingMode::Enabled{ static_cast<int32_t>(0x1) };
