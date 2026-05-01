#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventStats.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventStats_def.hpp"
// Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventType", ty: "::UnityEngine::Rendering::InstanceOcclusionEventType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstances", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "culledInstances", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventStats::InstanceOcclusionEventStats(int32_t viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType eventType,
                                                                                             int32_t occluderVersion, int32_t subviewMask, ::UnityEngine::Rendering::OcclusionTest occlusionTest,
                                                                                             int32_t visibleInstances, int32_t culledInstances) noexcept {
  this->viewInstanceID = viewInstanceID;
  this->eventType = eventType;
  this->occluderVersion = occluderVersion;
  this->subviewMask = subviewMask;
  this->occlusionTest = occlusionTest;
  this->visibleInstances = visibleInstances;
  this->culledInstances = culledInstances;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventStats::InstanceOcclusionEventStats() {}
