#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemGradientMode.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemGradientMode::ParticleSystemGradientMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemGradientMode::ParticleSystemGradientMode()   {
}
constexpr ::UnityEngine::ParticleSystemGradientMode  UnityEngine::ParticleSystemGradientMode::Color{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ParticleSystemGradientMode  UnityEngine::ParticleSystemGradientMode::Gradient{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ParticleSystemGradientMode  UnityEngine::ParticleSystemGradientMode::TwoColors{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ParticleSystemGradientMode  UnityEngine::ParticleSystemGradientMode::TwoGradients{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::ParticleSystemGradientMode  UnityEngine::ParticleSystemGradientMode::RandomColor{static_cast<int32_t>(0x4)};
