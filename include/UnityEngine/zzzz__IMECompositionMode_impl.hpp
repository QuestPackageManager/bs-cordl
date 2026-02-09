#pragma once
// IWYU pragma private; include "UnityEngine/IMECompositionMode.hpp"
#include "UnityEngine/zzzz__IMECompositionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::IMECompositionMode::IMECompositionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::IMECompositionMode::IMECompositionMode()   {
}
constexpr ::UnityEngine::IMECompositionMode  UnityEngine::IMECompositionMode::Auto{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::IMECompositionMode  UnityEngine::IMECompositionMode::On{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::IMECompositionMode  UnityEngine::IMECompositionMode::Off{static_cast<int32_t>(0x2)};
