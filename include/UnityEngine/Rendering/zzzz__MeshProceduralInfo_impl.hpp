#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MeshProceduralInfo.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MeshProceduralInfo_def.hpp"
// Ctor Parameters [CppParam { name: "topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseVertex", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "firstIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MeshProceduralInfo::MeshProceduralInfo(::UnityEngine::MeshTopology topology, uint32_t baseVertex, uint32_t firstIndex, uint32_t indexCount) noexcept {
  this->topology = topology;
  this->baseVertex = baseVertex;
  this->firstIndex = firstIndex;
  this->indexCount = indexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MeshProceduralInfo::MeshProceduralInfo() {}
