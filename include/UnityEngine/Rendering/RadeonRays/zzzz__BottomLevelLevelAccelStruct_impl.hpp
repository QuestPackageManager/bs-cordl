#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BottomLevelLevelAccelStruct.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BottomLevelLevelAccelStruct_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "bvh", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bvhOffset", ty: "uint32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "bvhLeaves", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "bvhLeavesOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct::BottomLevelLevelAccelStruct(::UnityEngine::GraphicsBuffer* bvh, uint32_t bvhOffset,
                                                                                                         ::UnityEngine::GraphicsBuffer* bvhLeaves, uint32_t bvhLeavesOffset) noexcept {
  this->bvh = bvh;
  this->bvhOffset = bvhOffset;
  this->bvhLeaves = bvhLeaves;
  this->bvhLeavesOffset = bvhLeavesOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct::BottomLevelLevelAccelStruct() {}
