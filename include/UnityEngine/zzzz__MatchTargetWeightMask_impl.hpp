#pragma once
// IWYU pragma private; include "UnityEngine/MatchTargetWeightMask.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__MatchTargetWeightMask_def.hpp"
// Ctor Parameters [CppParam { name: "m_PositionXYZWeight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RotationWeight", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::MatchTargetWeightMask::MatchTargetWeightMask(::UnityEngine::Vector3 m_PositionXYZWeight, float_t m_RotationWeight) noexcept {
  this->m_PositionXYZWeight = m_PositionXYZWeight;
  this->m_RotationWeight = m_RotationWeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::MatchTargetWeightMask::MatchTargetWeightMask() {}
