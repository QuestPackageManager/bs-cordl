#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BvhHeader.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__uint3_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BvhHeader_def.hpp"
// Ctor Parameters [CppParam { name: "internalNodeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leafNodeCount", ty: "uint32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "root", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unused", ty: "uint32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "globalAabbMin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "globalAabbMax", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unused3", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "unused4", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::BvhHeader::BvhHeader(uint32_t internalNodeCount, uint32_t leafNodeCount, uint32_t root, uint32_t unused, ::Unity::Mathematics::float3 globalAabbMin,
                                                                     ::Unity::Mathematics::float3 globalAabbMax, ::Unity::Mathematics::uint3 unused3, ::Unity::Mathematics::uint3 unused4) noexcept {
  this->internalNodeCount = internalNodeCount;
  this->leafNodeCount = leafNodeCount;
  this->root = root;
  this->unused = unused;
  this->globalAabbMin = globalAabbMin;
  this->globalAabbMax = globalAabbMax;
  this->unused3 = unused3;
  this->unused4 = unused4;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BvhHeader::BvhHeader() {}
