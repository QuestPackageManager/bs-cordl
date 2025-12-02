#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BlendMode.hpp"
#include "UnityEngine/Rendering/zzzz__BlendMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BlendMode::BlendMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BlendMode::BlendMode() {}
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::Zero{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::One{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::DstColor{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::SrcColor{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::OneMinusDstColor{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::SrcAlpha{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::OneMinusSrcColor{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::DstAlpha{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::OneMinusDstAlpha{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::SrcAlphaSaturate{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::Rendering::BlendMode UnityEngine::Rendering::BlendMode::OneMinusSrcAlpha{ static_cast<int32_t>(0xa) };
