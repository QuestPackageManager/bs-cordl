#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderMode.hpp"
#include "UnityEngine/zzzz__ParticleSystemRenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemRenderMode::ParticleSystemRenderMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemRenderMode::ParticleSystemRenderMode() {}
constexpr ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderMode::Billboard{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderMode::Stretch{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderMode::HorizontalBillboard{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderMode::VerticalBillboard{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderMode::Mesh{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ParticleSystemRenderMode UnityEngine::ParticleSystemRenderMode::None{ static_cast<int32_t>(0x5) };
