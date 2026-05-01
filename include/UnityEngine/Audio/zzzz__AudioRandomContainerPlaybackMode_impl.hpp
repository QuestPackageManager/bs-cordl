#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainerPlaybackMode.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerPlaybackMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioRandomContainerPlaybackMode::AudioRandomContainerPlaybackMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioRandomContainerPlaybackMode::AudioRandomContainerPlaybackMode() {}
constexpr ::UnityEngine::Audio::AudioRandomContainerPlaybackMode UnityEngine::Audio::AudioRandomContainerPlaybackMode::Sequential{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::AudioRandomContainerPlaybackMode UnityEngine::Audio::AudioRandomContainerPlaybackMode::Shuffle{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Audio::AudioRandomContainerPlaybackMode UnityEngine::Audio::AudioRandomContainerPlaybackMode::Random{ static_cast<int32_t>(0x2) };
