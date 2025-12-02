#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SinglePassStereoMode.hpp"
#include "UnityEngine/Rendering/zzzz__SinglePassStereoMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SinglePassStereoMode::SinglePassStereoMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SinglePassStereoMode::SinglePassStereoMode() {}
constexpr ::UnityEngine::Rendering::SinglePassStereoMode UnityEngine::Rendering::SinglePassStereoMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SinglePassStereoMode UnityEngine::Rendering::SinglePassStereoMode::SideBySide{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SinglePassStereoMode UnityEngine::Rendering::SinglePassStereoMode::Instancing{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::SinglePassStereoMode UnityEngine::Rendering::SinglePassStereoMode::Multiview{ static_cast<int32_t>(0x3) };
