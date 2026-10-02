#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/MeshBuildMemoryRequirements.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__MeshBuildMemoryRequirements_def.hpp"
// Ctor Parameters [CppParam { name: "buildScratchSizeInDwords", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bvhSizeInDwords", ty: "uint64_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "bvhLeavesSizeInDwords", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements::MeshBuildMemoryRequirements(uint64_t buildScratchSizeInDwords, uint64_t bvhSizeInDwords,
                                                                                                         uint64_t bvhLeavesSizeInDwords) noexcept {
  this->buildScratchSizeInDwords = buildScratchSizeInDwords;
  this->bvhSizeInDwords = bvhSizeInDwords;
  this->bvhLeavesSizeInDwords = bvhLeavesSizeInDwords;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements::MeshBuildMemoryRequirements() {}
