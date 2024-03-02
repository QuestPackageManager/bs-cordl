#pragma once
#include "UnityEngine/zzzz__ParticleSystemSortMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemSortMode::ParticleSystemSortMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemSortMode::ParticleSystemSortMode() {}
constexpr ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemSortMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemSortMode::Distance{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemSortMode::OldestInFront{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemSortMode::YoungestInFront{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ParticleSystemSortMode UnityEngine::ParticleSystemSortMode::Depth{ static_cast<int32_t>(0x4) };
