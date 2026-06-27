#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoAudioOutputMode.hpp"
#include "UnityEngine/Video/zzzz__VideoAudioOutputMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoAudioOutputMode::VideoAudioOutputMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoAudioOutputMode::VideoAudioOutputMode()   {
}
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::AudioSource{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::Direct{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::APIOnly{static_cast<int32_t>(0x3)};
