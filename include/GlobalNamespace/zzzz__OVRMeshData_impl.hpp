#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshData.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseAttributes", ty: "::GlobalNamespace::OVRMeshAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "morphTargets", ty: "::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData(::UnityW<::UnityEngine::Mesh>  mesh, ::UnityW<::UnityEngine::Material>  material, ::GlobalNamespace::OVRMeshAttributes  baseAttributes, ::ArrayW<::GlobalNamespace::OVRMeshAttributes,::Array<::GlobalNamespace::OVRMeshAttributes>*>  morphTargets) noexcept  {
this->mesh = mesh;
this->material = material;
this->baseAttributes = baseAttributes;
this->morphTargets = morphTargets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshData::OVRMeshData()   {
}
