#pragma once
// IWYU pragma private; include "UnityEngine/AudioClipLoadType.hpp"
#include "UnityEngine/zzzz__AudioClipLoadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioClipLoadType::AudioClipLoadType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioClipLoadType::AudioClipLoadType() {}
constexpr ::UnityEngine::AudioClipLoadType UnityEngine::AudioClipLoadType::DecompressOnLoad{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AudioClipLoadType UnityEngine::AudioClipLoadType::CompressedInMemory{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AudioClipLoadType UnityEngine::AudioClipLoadType::Streaming{ static_cast<int32_t>(0x2) };
