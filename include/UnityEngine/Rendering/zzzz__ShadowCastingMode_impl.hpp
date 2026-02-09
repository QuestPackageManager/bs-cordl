#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowCastingMode.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowCastingMode::ShadowCastingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadowCastingMode::ShadowCastingMode()   {
}
constexpr ::UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::Off{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::On{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::TwoSided{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::ShadowsOnly{static_cast<int32_t>(0x3)};
