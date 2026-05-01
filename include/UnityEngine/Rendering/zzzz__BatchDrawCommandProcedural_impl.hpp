#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommandProcedural.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandProcedural_def.hpp"
// Ctor Parameters [CppParam { name: "flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchID", ty:
// "::UnityEngine::Rendering::BatchID", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: Some("{}") },
// CppParam { name: "splitVisibilityMask", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sortingPosition", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "visibleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "indexBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseVertex", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "indexOffsetBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchDrawCommandProcedural::BatchDrawCommandProcedural(::UnityEngine::Rendering::BatchDrawCommandFlags flags, ::UnityEngine::Rendering::BatchID batchID,
                                                                                           ::UnityEngine::Rendering::BatchMaterialID materialID, uint16_t splitVisibilityMask, uint16_t lightmapIndex,
                                                                                           int32_t sortingPosition, uint32_t visibleOffset, uint32_t visibleCount, ::UnityEngine::MeshTopology topology,
                                                                                           ::UnityEngine::GraphicsBufferHandle indexBufferHandle, uint32_t baseVertex, uint32_t indexOffsetBytes,
                                                                                           uint32_t elementCount) noexcept {
  this->flags = flags;
  this->batchID = batchID;
  this->materialID = materialID;
  this->splitVisibilityMask = splitVisibilityMask;
  this->lightmapIndex = lightmapIndex;
  this->sortingPosition = sortingPosition;
  this->visibleOffset = visibleOffset;
  this->visibleCount = visibleCount;
  this->topology = topology;
  this->indexBufferHandle = indexBufferHandle;
  this->baseVertex = baseVertex;
  this->indexOffsetBytes = indexOffsetBytes;
  this->elementCount = elementCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchDrawCommandProcedural::BatchDrawCommandProcedural() {}
