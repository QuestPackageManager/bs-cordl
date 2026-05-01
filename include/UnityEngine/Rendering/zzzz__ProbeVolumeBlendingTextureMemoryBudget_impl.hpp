#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBlendingTextureMemoryBudget.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget::ProbeVolumeBlendingTextureMemoryBudget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget::ProbeVolumeBlendingTextureMemoryBudget() {}
constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget::MemoryBudgetLow{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget::MemoryBudgetMedium{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget::MemoryBudgetHigh{ static_cast<int32_t>(0x200) };
