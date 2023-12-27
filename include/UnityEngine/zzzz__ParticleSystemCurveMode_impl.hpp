#pragma once
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemCurveMode::ParticleSystemCurveMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemCurveMode::ParticleSystemCurveMode() {}
constexpr ::UnityEngine::ParticleSystemCurveMode UnityEngine::ParticleSystemCurveMode::Constant{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ParticleSystemCurveMode UnityEngine::ParticleSystemCurveMode::Curve{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemCurveMode UnityEngine::ParticleSystemCurveMode::TwoCurves{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ParticleSystemCurveMode UnityEngine::ParticleSystemCurveMode::TwoConstants{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
