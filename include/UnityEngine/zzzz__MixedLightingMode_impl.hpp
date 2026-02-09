#pragma once
// IWYU pragma private; include "UnityEngine/MixedLightingMode.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::MixedLightingMode::MixedLightingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::MixedLightingMode::MixedLightingMode()   {
}
constexpr ::UnityEngine::MixedLightingMode  UnityEngine::MixedLightingMode::IndirectOnly{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::MixedLightingMode  UnityEngine::MixedLightingMode::Shadowmask{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::MixedLightingMode  UnityEngine::MixedLightingMode::Subtractive{static_cast<int32_t>(0x1)};
