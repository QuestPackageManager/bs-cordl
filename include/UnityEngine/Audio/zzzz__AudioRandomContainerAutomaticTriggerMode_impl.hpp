#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainerAutomaticTriggerMode.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerAutomaticTriggerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode::AudioRandomContainerAutomaticTriggerMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode::AudioRandomContainerAutomaticTriggerMode() {}
constexpr ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode::Pulse{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode::Offset{ static_cast<int32_t>(0x1) };
