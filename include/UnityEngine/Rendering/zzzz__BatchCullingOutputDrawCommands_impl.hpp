#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingOutputDrawCommands.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandIndirect_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandProceduralIndirect_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandProcedural_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommand_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawRange_def.hpp"
// Ctor Parameters [CppParam { name: "drawCommands", ty: "::UnityEngine::Rendering::BatchDrawCommand*", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectDrawCommands", ty:
// "::UnityEngine::Rendering::BatchDrawCommandIndirect*", modifiers: "", def_value: Some("{}") }, CppParam { name: "proceduralDrawCommands", ty:
// "::UnityEngine::Rendering::BatchDrawCommandProcedural*", modifiers: "", def_value: Some("{}") }, CppParam { name: "proceduralIndirectDrawCommands", ty:
// "::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect*", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstances", ty: "int32_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "drawRanges", ty: "::UnityEngine::Rendering::BatchDrawRange*", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceSortingPositions", ty: "float_t*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "drawCommandPickingInstanceIDs", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCommandCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "indirectDrawCommandCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "proceduralDrawCommandCount", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "proceduralIndirectDrawCommandCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstanceCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "drawRangeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceSortingPositionFloatCount", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingOutputDrawCommands::BatchCullingOutputDrawCommands(
    ::UnityEngine::Rendering::BatchDrawCommand* drawCommands, ::UnityEngine::Rendering::BatchDrawCommandIndirect* indirectDrawCommands,
    ::UnityEngine::Rendering::BatchDrawCommandProcedural* proceduralDrawCommands, ::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect* proceduralIndirectDrawCommands,
    int32_t* visibleInstances, ::UnityEngine::Rendering::BatchDrawRange* drawRanges, float_t* instanceSortingPositions, int32_t* drawCommandPickingInstanceIDs, int32_t drawCommandCount,
    int32_t indirectDrawCommandCount, int32_t proceduralDrawCommandCount, int32_t proceduralIndirectDrawCommandCount, int32_t visibleInstanceCount, int32_t drawRangeCount,
    int32_t instanceSortingPositionFloatCount) noexcept {
  this->drawCommands = drawCommands;
  this->indirectDrawCommands = indirectDrawCommands;
  this->proceduralDrawCommands = proceduralDrawCommands;
  this->proceduralIndirectDrawCommands = proceduralIndirectDrawCommands;
  this->visibleInstances = visibleInstances;
  this->drawRanges = drawRanges;
  this->instanceSortingPositions = instanceSortingPositions;
  this->drawCommandPickingInstanceIDs = drawCommandPickingInstanceIDs;
  this->drawCommandCount = drawCommandCount;
  this->indirectDrawCommandCount = indirectDrawCommandCount;
  this->proceduralDrawCommandCount = proceduralDrawCommandCount;
  this->proceduralIndirectDrawCommandCount = proceduralIndirectDrawCommandCount;
  this->visibleInstanceCount = visibleInstanceCount;
  this->drawRangeCount = drawRangeCount;
  this->instanceSortingPositionFloatCount = instanceSortingPositionFloatCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingOutputDrawCommands::BatchCullingOutputDrawCommands() {}
