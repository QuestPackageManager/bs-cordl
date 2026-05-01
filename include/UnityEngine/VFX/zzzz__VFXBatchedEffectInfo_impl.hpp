#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXBatchedEffectInfo.hpp"
#include "UnityEngine/VFX/zzzz__VFXBatchedEffectInfo_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectAsset_def.hpp"
// Ctor Parameters [CppParam { name: "vfxAsset", ty: "::UnityW<::UnityEngine::VFX::VisualEffectAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeBatchCount", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "inactiveBatchCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeInstanceCount", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "unbatchedInstanceCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalInstanceCapacity", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "maxInstancePerBatchCapacity", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalGPUSizeInBytes", ty:
// "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalCPUSizeInBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXBatchedEffectInfo::VFXBatchedEffectInfo(::UnityW<::UnityEngine::VFX::VisualEffectAsset> vfxAsset, uint32_t activeBatchCount, uint32_t inactiveBatchCount,
                                                                         uint32_t activeInstanceCount, uint32_t unbatchedInstanceCount, uint32_t totalInstanceCapacity,
                                                                         uint32_t maxInstancePerBatchCapacity, uint64_t totalGPUSizeInBytes, uint64_t totalCPUSizeInBytes) noexcept {
  this->vfxAsset = vfxAsset;
  this->activeBatchCount = activeBatchCount;
  this->inactiveBatchCount = inactiveBatchCount;
  this->activeInstanceCount = activeInstanceCount;
  this->unbatchedInstanceCount = unbatchedInstanceCount;
  this->totalInstanceCapacity = totalInstanceCapacity;
  this->maxInstancePerBatchCapacity = maxInstancePerBatchCapacity;
  this->totalGPUSizeInBytes = totalGPUSizeInBytes;
  this->totalCPUSizeInBytes = totalCPUSizeInBytes;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXBatchedEffectInfo::VFXBatchedEffectInfo() {}
