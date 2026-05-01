#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainerLoopMode.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerLoopMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioRandomContainerLoopMode::AudioRandomContainerLoopMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioRandomContainerLoopMode::AudioRandomContainerLoopMode() {}
constexpr ::UnityEngine::Audio::AudioRandomContainerLoopMode UnityEngine::Audio::AudioRandomContainerLoopMode::Infinite{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::AudioRandomContainerLoopMode UnityEngine::Audio::AudioRandomContainerLoopMode::Clips{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Audio::AudioRandomContainerLoopMode UnityEngine::Audio::AudioRandomContainerLoopMode::Cycles{ static_cast<int32_t>(0x2) };
