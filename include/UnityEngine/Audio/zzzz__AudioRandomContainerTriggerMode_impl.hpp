#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainerTriggerMode.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerTriggerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioRandomContainerTriggerMode::AudioRandomContainerTriggerMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioRandomContainerTriggerMode::AudioRandomContainerTriggerMode() {}
constexpr ::UnityEngine::Audio::AudioRandomContainerTriggerMode UnityEngine::Audio::AudioRandomContainerTriggerMode::Manual{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::AudioRandomContainerTriggerMode UnityEngine::Audio::AudioRandomContainerTriggerMode::Automatic{ static_cast<int32_t>(0x1) };
