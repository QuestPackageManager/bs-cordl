#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/MeshBuildInfo.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__IndexFormat_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__MeshBuildInfo_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "verticesStartOffset", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexStride", ty:
// "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseVertex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "triangleIndices", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indicesStartOffset", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "baseIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indexFormat", ty:
// "::UnityEngine::Rendering::RadeonRays::IndexFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo::MeshBuildInfo(::UnityEngine::GraphicsBuffer* vertices, int32_t verticesStartOffset, uint32_t vertexCount, uint32_t vertexStride,
                                                                             int32_t baseVertex, ::UnityEngine::GraphicsBuffer* triangleIndices, int32_t indicesStartOffset, int32_t baseIndex,
                                                                             ::UnityEngine::Rendering::RadeonRays::IndexFormat indexFormat, uint32_t triangleCount) noexcept {
  this->vertices = vertices;
  this->verticesStartOffset = verticesStartOffset;
  this->vertexCount = vertexCount;
  this->vertexStride = vertexStride;
  this->baseVertex = baseVertex;
  this->triangleIndices = triangleIndices;
  this->indicesStartOffset = indicesStartOffset;
  this->baseIndex = baseIndex;
  this->indexFormat = indexFormat;
  this->triangleCount = triangleCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo::MeshBuildInfo() {}
