#pragma once
// IWYU pragma private; include "UnityEngine/LightShadows.hpp"
#include "UnityEngine/zzzz__LightShadows_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightShadows::LightShadows(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightShadows::LightShadows()   {
}
constexpr ::UnityEngine::LightShadows  UnityEngine::LightShadows::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::LightShadows  UnityEngine::LightShadows::Hard{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::LightShadows  UnityEngine::LightShadows::Soft{static_cast<int32_t>(0x2)};
