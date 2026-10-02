#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BvhNode.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BvhNode_def.hpp"
// Ctor Parameters [CppParam { name: "child0", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "child1", ty: "uint32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "parent", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "update", ty: "uint32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "aabb0_min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aabb0_max", ty:
// "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aabb1_min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "aabb1_max", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::BvhNode::BvhNode(uint32_t child0, uint32_t child1, uint32_t parent, uint32_t update, ::Unity::Mathematics::float3 aabb0_min,
                                                                 ::Unity::Mathematics::float3 aabb0_max, ::Unity::Mathematics::float3 aabb1_min, ::Unity::Mathematics::float3 aabb1_max) noexcept {
  this->child0 = child0;
  this->child1 = child1;
  this->parent = parent;
  this->update = update;
  this->aabb0_min = aabb0_min;
  this->aabb0_max = aabb0_max;
  this->aabb1_min = aabb1_min;
  this->aabb1_max = aabb1_max;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BvhNode::BvhNode() {}
