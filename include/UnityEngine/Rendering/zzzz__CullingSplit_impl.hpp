#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingSplit.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
// Ctor Parameters [CppParam { name: "sphereCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlaneOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CullingSplit::CullingSplit(::UnityEngine::Vector3  sphereCenter, float_t  sphereRadius, int32_t  cullingPlaneOffset, int32_t  cullingPlaneCount, float_t  cascadeBlendCullingFactor, float_t  nearPlane, ::UnityEngine::Matrix4x4  cullingMatrix) noexcept  {
this->sphereCenter = sphereCenter;
this->sphereRadius = sphereRadius;
this->cullingPlaneOffset = cullingPlaneOffset;
this->cullingPlaneCount = cullingPlaneCount;
this->cascadeBlendCullingFactor = cascadeBlendCullingFactor;
this->nearPlane = nearPlane;
this->cullingMatrix = cullingMatrix;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CullingSplit::CullingSplit()   {
}
