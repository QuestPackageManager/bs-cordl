#pragma once
// IWYU pragma private; include "UnityEngine/ScaleMode.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ScaleMode::ScaleMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ScaleMode::ScaleMode()   {
}
constexpr ::UnityEngine::ScaleMode  UnityEngine::ScaleMode::StretchToFill{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ScaleMode  UnityEngine::ScaleMode::ScaleAndCrop{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ScaleMode  UnityEngine::ScaleMode::ScaleToFit{static_cast<int32_t>(0x2)};
