#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/VertexBufferChunk.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__VertexBufferChunk_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "verticesStartOffset", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexStride", ty:
// "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseVertex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk::VertexBufferChunk(::UnityEngine::GraphicsBuffer* vertices, int32_t verticesStartOffset, uint32_t vertexCount,
                                                                                            uint32_t vertexStride, int32_t baseVertex) noexcept {
  this->vertices = vertices;
  this->verticesStartOffset = verticesStartOffset;
  this->vertexCount = vertexCount;
  this->vertexStride = vertexStride;
  this->baseVertex = baseVertex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk::VertexBufferChunk() {}
