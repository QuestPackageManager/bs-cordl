#pragma once
#include "UnityEngine/zzzz__ParticleSystemRenderSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemRenderSpace::ParticleSystemRenderSpace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemRenderSpace::ParticleSystemRenderSpace() {}
constexpr ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderSpace::View{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderSpace::World{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderSpace::Local{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderSpace::Facing{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ParticleSystemRenderSpace UnityEngine::ParticleSystemRenderSpace::Velocity{ static_cast<int32_t>(0x4) };
