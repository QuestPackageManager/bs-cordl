#pragma once
// IWYU pragma private; include "UnityEngine/AudioDataLoadState.hpp"
#include "UnityEngine/zzzz__AudioDataLoadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioDataLoadState::AudioDataLoadState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioDataLoadState::AudioDataLoadState() {}
constexpr ::UnityEngine::AudioDataLoadState UnityEngine::AudioDataLoadState::Unloaded{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AudioDataLoadState UnityEngine::AudioDataLoadState::Loading{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AudioDataLoadState UnityEngine::AudioDataLoadState::Loaded{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AudioDataLoadState UnityEngine::AudioDataLoadState::Failed{ static_cast<int32_t>(0x3) };
