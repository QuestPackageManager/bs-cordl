#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectDrawInfo.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectDrawInfo_def.hpp"
// Ctor Parameters [CppParam { name: "indexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "baseVertex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstInstanceGlobalIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "maxInstanceCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectDrawInfo::IndirectDrawInfo(uint32_t indexCount, uint32_t firstIndex, uint32_t baseVertex, uint32_t firstInstanceGlobalIndex,
                                                                       uint32_t maxInstanceCount) noexcept {
  this->indexCount = indexCount;
  this->firstIndex = firstIndex;
  this->baseVertex = baseVertex;
  this->firstInstanceGlobalIndex = firstInstanceGlobalIndex;
  this->maxInstanceCount = maxInstanceCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectDrawInfo::IndirectDrawInfo() {}
