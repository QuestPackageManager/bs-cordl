#pragma once
// IWYU pragma private; include "UnityEngine/ForceMode.hpp"
#include "UnityEngine/zzzz__ForceMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ForceMode::ForceMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ForceMode::ForceMode()   {
}
constexpr ::UnityEngine::ForceMode  UnityEngine::ForceMode::Force{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ForceMode  UnityEngine::ForceMode::Acceleration{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::ForceMode  UnityEngine::ForceMode::Impulse{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ForceMode  UnityEngine::ForceMode::VelocityChange{static_cast<int32_t>(0x2)};
