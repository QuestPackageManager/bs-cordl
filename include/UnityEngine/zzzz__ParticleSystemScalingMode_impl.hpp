#pragma once
#include "UnityEngine/zzzz__ParticleSystemScalingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemScalingMode::ParticleSystemScalingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemScalingMode::ParticleSystemScalingMode() {}
constexpr ::UnityEngine::ParticleSystemScalingMode UnityEngine::ParticleSystemScalingMode::Hierarchy{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ParticleSystemScalingMode UnityEngine::ParticleSystemScalingMode::Local{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemScalingMode UnityEngine::ParticleSystemScalingMode::Shape{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
