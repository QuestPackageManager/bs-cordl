#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeoPoolMeshChunk.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeoPoolMeshChunk_def.hpp"
// Ctor Parameters [CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "vertexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk::GeoPoolMeshChunk(int32_t indexOffset, int32_t indexCount, int32_t vertexOffset, int32_t vertexCount) noexcept {
  this->indexOffset = indexOffset;
  this->indexCount = indexCount;
  this->vertexOffset = vertexOffset;
  this->vertexCount = vertexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk::GeoPoolMeshChunk() {}
