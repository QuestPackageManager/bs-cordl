#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTClearFlags.hpp"
#include "UnityEngine/Rendering/zzzz__RTClearFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color0{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color1{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color2{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color3{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color4{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color5{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color6{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::Rendering::RTClearFlags UnityEngine::Rendering::RTClearFlags::Color7{ static_cast<int32_t>(0x400) };
