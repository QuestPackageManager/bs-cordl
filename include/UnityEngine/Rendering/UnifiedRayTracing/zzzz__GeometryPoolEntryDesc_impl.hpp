#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolEntryDesc.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolSubmeshData_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolEntryDesc_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolSubmeshData_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "submeshData", ty:
// "::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc::GeometryPoolEntryDesc(
    ::UnityW<::UnityEngine::Mesh> mesh, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> submeshData) noexcept {
  this->mesh = mesh;
  this->submeshData = submeshData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc::GeometryPoolEntryDesc() {}
