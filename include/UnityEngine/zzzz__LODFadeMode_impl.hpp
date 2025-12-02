#pragma once
// IWYU pragma private; include "UnityEngine/LODFadeMode.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LODFadeMode::LODFadeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LODFadeMode::LODFadeMode() {}
constexpr ::UnityEngine::LODFadeMode UnityEngine::LODFadeMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LODFadeMode UnityEngine::LODFadeMode::CrossFade{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LODFadeMode UnityEngine::LODFadeMode::SpeedTree{ static_cast<int32_t>(0x2) };
