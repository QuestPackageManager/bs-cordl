#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugWireframeMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugWireframeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode::DebugWireframeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode::DebugWireframeMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode UnityEngine::Rendering::Universal::DebugWireframeMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode UnityEngine::Rendering::Universal::DebugWireframeMode::Wireframe{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode UnityEngine::Rendering::Universal::DebugWireframeMode::SolidWireframe{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode UnityEngine::Rendering::Universal::DebugWireframeMode::ShadedWireframe{ static_cast<int32_t>(0x3) };
