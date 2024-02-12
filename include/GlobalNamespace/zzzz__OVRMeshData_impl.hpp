#pragma once
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData(::UnityW<::UnityEngine::Mesh> mesh, ::UnityW<::UnityEngine::Material> material) noexcept {
  this->mesh = mesh;
  this->material = material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
