#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemMeshDistribution.hpp"
#include "UnityEngine/zzzz__ParticleSystemMeshDistribution_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemMeshDistribution::ParticleSystemMeshDistribution(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemMeshDistribution::ParticleSystemMeshDistribution() {}
constexpr ::UnityEngine::ParticleSystemMeshDistribution UnityEngine::ParticleSystemMeshDistribution::UniformRandom{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ParticleSystemMeshDistribution UnityEngine::ParticleSystemMeshDistribution::NonUniformRandom{ static_cast<int32_t>(0x1) };
