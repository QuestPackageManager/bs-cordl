#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerViewStats.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerViewStats_def.hpp"
// Ctor Parameters [CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewInstanceID", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "splitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstances", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "drawCommands", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCullerViewStats::InstanceCullerViewStats(::UnityEngine::Rendering::BatchCullingViewType viewType, int32_t viewInstanceID, int32_t splitIndex,
                                                                                     int32_t visibleInstances, int32_t drawCommands) noexcept {
  this->viewType = viewType;
  this->viewInstanceID = viewInstanceID;
  this->splitIndex = splitIndex;
  this->visibleInstances = visibleInstances;
  this->drawCommands = drawCommands;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullerViewStats::InstanceCullerViewStats() {}
