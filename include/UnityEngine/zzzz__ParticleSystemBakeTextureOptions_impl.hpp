#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemBakeTextureOptions.hpp"
#include "UnityEngine/zzzz__ParticleSystemBakeTextureOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions::ParticleSystemBakeTextureOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions::ParticleSystemBakeTextureOptions() {}
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions UnityEngine::ParticleSystemBakeTextureOptions::BakeRotationAndScale{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions UnityEngine::ParticleSystemBakeTextureOptions::BakePosition{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions UnityEngine::ParticleSystemBakeTextureOptions::PerVertex{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions UnityEngine::ParticleSystemBakeTextureOptions::PerParticle{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions UnityEngine::ParticleSystemBakeTextureOptions::IncludeParticleIndices{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::ParticleSystemBakeTextureOptions UnityEngine::ParticleSystemBakeTextureOptions::Default{ static_cast<int32_t>(0x4) };
