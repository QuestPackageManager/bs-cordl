#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommand.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommand_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
// Ctor Parameters [CppParam { name: "visibleOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "batchID", ty: "::UnityEngine::Rendering::BatchID", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "meshID", ty: "::UnityEngine::Rendering::BatchMeshID", modifiers: "", def_value: Some("{}") }, CppParam { name: "submeshIndex", ty:
// "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitVisibilityMask", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingPosition", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchDrawCommand::BatchDrawCommand(uint32_t visibleOffset, uint32_t visibleCount, ::UnityEngine::Rendering::BatchID batchID,
                                                                       ::UnityEngine::Rendering::BatchMaterialID materialID, ::UnityEngine::Rendering::BatchMeshID meshID, uint16_t submeshIndex,
                                                                       uint16_t splitVisibilityMask, ::UnityEngine::Rendering::BatchDrawCommandFlags flags, int32_t sortingPosition) noexcept {
  this->visibleOffset = visibleOffset;
  this->visibleCount = visibleCount;
  this->batchID = batchID;
  this->materialID = materialID;
  this->meshID = meshID;
  this->submeshIndex = submeshIndex;
  this->splitVisibilityMask = splitVisibilityMask;
  this->flags = flags;
  this->sortingPosition = sortingPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchDrawCommand::BatchDrawCommand() {}
