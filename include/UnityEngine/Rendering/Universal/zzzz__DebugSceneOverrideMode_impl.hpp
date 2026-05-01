#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugSceneOverrideMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugSceneOverrideMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode::DebugSceneOverrideMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode::DebugSceneOverrideMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugSceneOverrideMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugSceneOverrideMode::Overdraw{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugSceneOverrideMode::Wireframe{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugSceneOverrideMode::SolidWireframe{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugSceneOverrideMode::ShadedWireframe{ static_cast<int32_t>(0x4) };
