#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommandFlags.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags::BatchDrawCommandFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags::BatchDrawCommandFlags() {}
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags UnityEngine::Rendering::BatchDrawCommandFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags UnityEngine::Rendering::BatchDrawCommandFlags::FlipWinding{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags UnityEngine::Rendering::BatchDrawCommandFlags::HasMotion{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags UnityEngine::Rendering::BatchDrawCommandFlags::IsLightMapped{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags UnityEngine::Rendering::BatchDrawCommandFlags::HasSortingPosition{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandFlags UnityEngine::Rendering::BatchDrawCommandFlags::LODCrossFade{ static_cast<int32_t>(0x10) };
