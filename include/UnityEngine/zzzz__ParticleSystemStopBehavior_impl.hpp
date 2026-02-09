#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemStopBehavior.hpp"
#include "UnityEngine/zzzz__ParticleSystemStopBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemStopBehavior::ParticleSystemStopBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemStopBehavior::ParticleSystemStopBehavior()   {
}
constexpr ::UnityEngine::ParticleSystemStopBehavior  UnityEngine::ParticleSystemStopBehavior::StopEmittingAndClear{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ParticleSystemStopBehavior  UnityEngine::ParticleSystemStopBehavior::StopEmitting{static_cast<int32_t>(0x1)};
