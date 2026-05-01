#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DepthFormat.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DepthFormat::DepthFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DepthFormat::DepthFormat() {}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::DepthFormat::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::DepthFormat::Depth_16{ static_cast<int32_t>(0x5a) };
constexpr ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::DepthFormat::Depth_24{ static_cast<int32_t>(0x5b) };
constexpr ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::DepthFormat::Depth_32{ static_cast<int32_t>(0x5d) };
constexpr ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::DepthFormat::Depth_16_Stencil_8{ static_cast<int32_t>(0x97) };
constexpr ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::DepthFormat::Depth_24_Stencil_8{ static_cast<int32_t>(0x5c) };
constexpr ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::DepthFormat::Depth_32_Stencil_8{ static_cast<int32_t>(0x5e) };
