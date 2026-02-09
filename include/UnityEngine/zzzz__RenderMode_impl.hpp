#pragma once
// IWYU pragma private; include "UnityEngine/RenderMode.hpp"
#include "UnityEngine/zzzz__RenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderMode::RenderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderMode::RenderMode()   {
}
constexpr ::UnityEngine::RenderMode  UnityEngine::RenderMode::ScreenSpaceOverlay{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RenderMode  UnityEngine::RenderMode::ScreenSpaceCamera{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RenderMode  UnityEngine::RenderMode::WorldSpace{static_cast<int32_t>(0x2)};
