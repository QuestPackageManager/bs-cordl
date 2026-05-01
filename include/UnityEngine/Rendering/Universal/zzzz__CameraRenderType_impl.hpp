#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraRenderType.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType::CameraRenderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType::CameraRenderType() {}
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType UnityEngine::Rendering::Universal::CameraRenderType::Base{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType UnityEngine::Rendering::Universal::CameraRenderType::Overlay{ static_cast<int32_t>(0x1) };
