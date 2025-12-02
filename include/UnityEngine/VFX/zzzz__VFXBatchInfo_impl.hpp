#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXBatchInfo.hpp"
#include "UnityEngine/VFX/zzzz__VFXBatchInfo_def.hpp"
// Ctor Parameters [CppParam { name: "capacity", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeInstanceCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXBatchInfo::VFXBatchInfo(uint32_t capacity, uint32_t activeInstanceCount) noexcept {
  this->capacity = capacity;
  this->activeInstanceCount = activeInstanceCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXBatchInfo::VFXBatchInfo() {}
