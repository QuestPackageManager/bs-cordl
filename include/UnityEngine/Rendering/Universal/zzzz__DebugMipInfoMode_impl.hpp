#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugMipInfoMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode::DebugMipInfoMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode::DebugMipInfoMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::MipStreamingPerformance{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::MipStreamingStatus{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::MipStreamingActivity{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::MipStreamingPriority{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::MipCount{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugMipInfoMode::MipRatio{ static_cast<int32_t>(0x6) };
