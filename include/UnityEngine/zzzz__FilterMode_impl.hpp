#pragma once
// IWYU pragma private; include "UnityEngine/FilterMode.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FilterMode::FilterMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FilterMode::FilterMode()   {
}
constexpr ::UnityEngine::FilterMode  UnityEngine::FilterMode::Point{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::FilterMode  UnityEngine::FilterMode::Bilinear{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::FilterMode  UnityEngine::FilterMode::Trilinear{static_cast<int32_t>(0x2)};
