#pragma once
// IWYU pragma private; include "UnityEngine/CursorLockMode.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CursorLockMode::CursorLockMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CursorLockMode::CursorLockMode()   {
}
constexpr ::UnityEngine::CursorLockMode  UnityEngine::CursorLockMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CursorLockMode  UnityEngine::CursorLockMode::Locked{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CursorLockMode  UnityEngine::CursorLockMode::Confined{static_cast<int32_t>(0x2)};
