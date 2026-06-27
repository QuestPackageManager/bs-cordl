#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowSamplingMode.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSamplingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowSamplingMode::ShadowSamplingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadowSamplingMode::ShadowSamplingMode()   {
}
constexpr ::UnityEngine::Rendering::ShadowSamplingMode  UnityEngine::Rendering::ShadowSamplingMode::CompareDepths{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::ShadowSamplingMode  UnityEngine::Rendering::ShadowSamplingMode::RawDepth{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ShadowSamplingMode  UnityEngine::Rendering::ShadowSamplingMode::None{static_cast<int32_t>(0x2)};
