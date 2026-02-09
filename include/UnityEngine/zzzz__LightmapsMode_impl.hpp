#pragma once
// IWYU pragma private; include "UnityEngine/LightmapsMode.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightmapsMode::LightmapsMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapsMode::LightmapsMode()   {
}
constexpr ::UnityEngine::LightmapsMode  UnityEngine::LightmapsMode::NonDirectional{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::LightmapsMode  UnityEngine::LightmapsMode::CombinedDirectional{static_cast<int32_t>(0x1)};
