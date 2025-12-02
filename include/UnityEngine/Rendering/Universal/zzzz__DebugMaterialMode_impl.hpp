#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugMaterialMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode::DebugMaterialMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode::DebugMaterialMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::Albedo{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::Specular{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::Alpha{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::Smoothness{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::AmbientOcclusion{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::Emission{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::NormalWorldSpace{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::NormalTangentSpace{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::LightingComplexity{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::Metallic{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::SpriteMask{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode UnityEngine::Rendering::Universal::DebugMaterialMode::RenderingLayerMasks{ static_cast<int32_t>(0xc) };
