#pragma once
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData(::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material) noexcept {
  this->mesh = mesh;
  this->material = material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
