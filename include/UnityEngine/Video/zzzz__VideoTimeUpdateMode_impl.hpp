#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoTimeUpdateMode.hpp"
#include "UnityEngine/Video/zzzz__VideoTimeUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoTimeUpdateMode::VideoTimeUpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoTimeUpdateMode::VideoTimeUpdateMode()   {
}
constexpr ::UnityEngine::Video::VideoTimeUpdateMode  UnityEngine::Video::VideoTimeUpdateMode::DSPTime{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoTimeUpdateMode  UnityEngine::Video::VideoTimeUpdateMode::GameTime{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Video::VideoTimeUpdateMode  UnityEngine::Video::VideoTimeUpdateMode::UnscaledGameTime{static_cast<int32_t>(0x2)};
