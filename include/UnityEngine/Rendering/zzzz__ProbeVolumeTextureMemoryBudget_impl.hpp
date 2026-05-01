#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeTextureMemoryBudget.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget::ProbeVolumeTextureMemoryBudget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget::ProbeVolumeTextureMemoryBudget() {}
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget::MemoryBudgetLow{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget::MemoryBudgetMedium{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget::MemoryBudgetHigh{ static_cast<int32_t>(0x800) };
