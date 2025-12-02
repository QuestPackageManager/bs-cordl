#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/DepthFrameDesc.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__DepthFrameDesc_def.hpp"
// Ctor Parameters [CppParam { name: "createPoseLocation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "createPoseRotation", ty: "::UnityEngine::Quaternion",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fovLeftAngleTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovRightAngleTangent", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fovTopAngleTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovDownAngleTangent", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::Meta::XR::EnvironmentDepth::DepthFrameDesc::DepthFrameDesc(::UnityEngine::Vector3 createPoseLocation, ::UnityEngine::Quaternion createPoseRotation, float_t fovLeftAngleTangent,
                                                                       float_t fovRightAngleTangent, float_t fovTopAngleTangent, float_t fovDownAngleTangent, float_t nearZ, float_t farZ) noexcept {
  this->createPoseLocation = createPoseLocation;
  this->createPoseRotation = createPoseRotation;
  this->fovLeftAngleTangent = fovLeftAngleTangent;
  this->fovRightAngleTangent = fovRightAngleTangent;
  this->fovTopAngleTangent = fovTopAngleTangent;
  this->fovDownAngleTangent = fovDownAngleTangent;
  this->nearZ = nearZ;
  this->farZ = farZ;
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepth::DepthFrameDesc::DepthFrameDesc() {}
