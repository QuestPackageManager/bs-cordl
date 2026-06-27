#pragma once
// IWYU pragma private; include "UnityEngine/DepthTextureMode.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DepthTextureMode::DepthTextureMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::DepthTextureMode::DepthTextureMode()   {
}
constexpr ::UnityEngine::DepthTextureMode  UnityEngine::DepthTextureMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::DepthTextureMode  UnityEngine::DepthTextureMode::Depth{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::DepthTextureMode  UnityEngine::DepthTextureMode::DepthNormals{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::DepthTextureMode  UnityEngine::DepthTextureMode::MotionVectors{static_cast<int32_t>(0x4)};
