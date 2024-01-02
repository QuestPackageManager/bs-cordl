#pragma once
#include "GlobalNamespace/zzzz__OVRMeshAttributes_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "baseAttributes", ty: "::GlobalNamespace::OVRMeshAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "morphTargets", ty:
// "::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData(::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material, ::GlobalNamespace::OVRMeshAttributes baseAttributes,
                                                      ::ArrayW<::GlobalNamespace::OVRMeshAttributes, ::Array<::GlobalNamespace::OVRMeshAttributes>*> morphTargets) noexcept {
  this->mesh = mesh;
  this->material = material;
  this->baseAttributes = baseAttributes;
  this->morphTargets = morphTargets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
