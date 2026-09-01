#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRMeshAttributes.hpp"
#include "UnityEngine/zzzz__BoneWeight_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "texcoords", ty:
// "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "boneWeights", ty: "::ArrayW<::UnityEngine::BoneWeight>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMeshAttributes::OVRMeshAttributes(::ArrayW<::UnityEngine::Vector3> vertices, ::ArrayW<::UnityEngine::Vector3> normals, ::ArrayW<::UnityEngine::Vector4> tangents,
                                                                  ::ArrayW<::UnityEngine::Vector2> texcoords, ::ArrayW<::UnityEngine::Color> colors,
                                                                  ::ArrayW<::UnityEngine::BoneWeight> boneWeights) noexcept {
  this->vertices = vertices;
  this->normals = normals;
  this->tangents = tangents;
  this->texcoords = texcoords;
  this->colors = colors;
  this->boneWeights = boneWeights;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshAttributes::OVRMeshAttributes() {}
