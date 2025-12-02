#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInputRayData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInputRayData_def.hpp"
// Ctor Parameters [CppParam { name: "IsActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActivationStrength", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "IsOverCanvas", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "DistanceToCanvas", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "WorldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "WorldNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRInputRayData::OVRInputRayData(bool IsActive, float_t ActivationStrength, bool IsOverCanvas, float_t DistanceToCanvas, ::UnityEngine::Vector3 WorldPosition,
                                                              ::UnityEngine::Vector3 WorldNormal) noexcept {
  this->IsActive = IsActive;
  this->ActivationStrength = ActivationStrength;
  this->IsOverCanvas = IsOverCanvas;
  this->DistanceToCanvas = DistanceToCanvas;
  this->WorldPosition = WorldPosition;
  this->WorldNormal = WorldNormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInputRayData::OVRInputRayData() {}
