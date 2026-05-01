#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommandProceduralIndirect.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandProceduralIndirect_def.hpp"
// Ctor Parameters [CppParam { name: "flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchID", ty:
// "::UnityEngine::Rendering::BatchID", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: Some("{}") },
// CppParam { name: "splitVisibilityMask", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sortingPosition", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visibleInstancesBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "visibleInstancesBufferWindowOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstancesBufferWindowSizeBytes", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "indirectArgsBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectArgsBufferOffset", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect::BatchDrawCommandProceduralIndirect(
    ::UnityEngine::Rendering::BatchDrawCommandFlags flags, ::UnityEngine::Rendering::BatchID batchID, ::UnityEngine::Rendering::BatchMaterialID materialID, uint16_t splitVisibilityMask,
    uint16_t lightmapIndex, int32_t sortingPosition, uint32_t visibleOffset, ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBufferHandle indexBufferHandle,
    ::UnityEngine::GraphicsBufferHandle visibleInstancesBufferHandle, uint32_t visibleInstancesBufferWindowOffset, uint32_t visibleInstancesBufferWindowSizeBytes,
    ::UnityEngine::GraphicsBufferHandle indirectArgsBufferHandle, uint32_t indirectArgsBufferOffset) noexcept {
  this->flags = flags;
  this->batchID = batchID;
  this->materialID = materialID;
  this->splitVisibilityMask = splitVisibilityMask;
  this->lightmapIndex = lightmapIndex;
  this->sortingPosition = sortingPosition;
  this->visibleOffset = visibleOffset;
  this->topology = topology;
  this->indexBufferHandle = indexBufferHandle;
  this->visibleInstancesBufferHandle = visibleInstancesBufferHandle;
  this->visibleInstancesBufferWindowOffset = visibleInstancesBufferWindowOffset;
  this->visibleInstancesBufferWindowSizeBytes = visibleInstancesBufferWindowSizeBytes;
  this->indirectArgsBufferHandle = indirectArgsBufferHandle;
  this->indirectArgsBufferOffset = indirectArgsBufferOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect::BatchDrawCommandProceduralIndirect() {}
