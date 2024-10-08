#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingOutputDrawCommands.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommand_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawRange_def.hpp"
// Ctor Parameters [CppParam { name: "drawCommands", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawCommand>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "visibleInstances", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "drawRanges", ty:
// "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawRange>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "instanceSortingPositions", ty: "::cordl_internals::Ptr<float_t>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "drawCommandPickingInstanceIDs", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "drawCommandCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "drawRangeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceSortingPositionFloatCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingOutputDrawCommands::BatchCullingOutputDrawCommands(
    ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawCommand> drawCommands, ::cordl_internals::Ptr<int32_t> visibleInstances,
    ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawRange> drawRanges, ::cordl_internals::Ptr<float_t> instanceSortingPositions,
    ::cordl_internals::Ptr<int32_t> drawCommandPickingInstanceIDs, int32_t drawCommandCount, int32_t visibleInstanceCount, int32_t drawRangeCount, int32_t instanceSortingPositionFloatCount) noexcept {
  this->drawCommands = drawCommands;
  this->visibleInstances = visibleInstances;
  this->drawRanges = drawRanges;
  this->instanceSortingPositions = instanceSortingPositions;
  this->drawCommandPickingInstanceIDs = drawCommandPickingInstanceIDs;
  this->drawCommandCount = drawCommandCount;
  this->visibleInstanceCount = visibleInstanceCount;
  this->drawRangeCount = drawRangeCount;
  this->instanceSortingPositionFloatCount = instanceSortingPositionFloatCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingOutputDrawCommands::BatchCullingOutputDrawCommands() {}
