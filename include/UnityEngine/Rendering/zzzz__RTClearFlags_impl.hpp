#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTClearFlags.hpp"
#include "UnityEngine/Rendering/zzzz__RTClearFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RTClearFlags::RTClearFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTClearFlags::RTClearFlags() {}
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Depth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Stencil{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::All{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::DepthStencil{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::ColorDepth{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::ColorStencil{ static_cast<int32_t>(0x5) };
