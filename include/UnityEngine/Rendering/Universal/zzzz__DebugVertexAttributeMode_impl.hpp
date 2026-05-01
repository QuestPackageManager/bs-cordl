#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugVertexAttributeMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugVertexAttributeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode::DebugVertexAttributeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode::DebugVertexAttributeMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::Texcoord0{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::Texcoord1{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::Texcoord2{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::Texcoord3{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::Color{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::Tangent{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode UnityEngine::Rendering::Universal::DebugVertexAttributeMode::Normal{ static_cast<int32_t>(0x7) };
