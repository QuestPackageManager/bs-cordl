#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerUpdateMode.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioMixerUpdateMode::AudioMixerUpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixerUpdateMode::AudioMixerUpdateMode() {}
constexpr ::UnityEngine::Audio::AudioMixerUpdateMode UnityEngine::Audio::AudioMixerUpdateMode::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::AudioMixerUpdateMode UnityEngine::Audio::AudioMixerUpdateMode::UnscaledTime{ static_cast<int32_t>(0x1) };
