#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemBakeMeshOptions.hpp"
#include "UnityEngine/zzzz__ParticleSystemBakeMeshOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemBakeMeshOptions::ParticleSystemBakeMeshOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemBakeMeshOptions::ParticleSystemBakeMeshOptions() {}
constexpr ::UnityEngine::ParticleSystemBakeMeshOptions UnityEngine::ParticleSystemBakeMeshOptions::BakeRotationAndScale{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemBakeMeshOptions UnityEngine::ParticleSystemBakeMeshOptions::BakePosition{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ParticleSystemBakeMeshOptions UnityEngine::ParticleSystemBakeMeshOptions::Default{ static_cast<int32_t>(0x0) };
