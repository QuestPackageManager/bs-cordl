#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoRenderMode.hpp"
#include "UnityEngine/Video/zzzz__VideoRenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoRenderMode::VideoRenderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoRenderMode::VideoRenderMode()   {
}
constexpr ::UnityEngine::Video::VideoRenderMode  UnityEngine::Video::VideoRenderMode::CameraFarPlane{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoRenderMode  UnityEngine::Video::VideoRenderMode::CameraNearPlane{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Video::VideoRenderMode  UnityEngine::Video::VideoRenderMode::RenderTexture{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Video::VideoRenderMode  UnityEngine::Video::VideoRenderMode::MaterialOverride{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Video::VideoRenderMode  UnityEngine::Video::VideoRenderMode::APIOnly{static_cast<int32_t>(0x4)};
