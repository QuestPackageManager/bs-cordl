#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingViewType.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingViewType::BatchCullingViewType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingViewType::BatchCullingViewType() {}
constexpr ::UnityEngine::Rendering::BatchCullingViewType UnityEngine::Rendering::BatchCullingViewType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BatchCullingViewType UnityEngine::Rendering::BatchCullingViewType::Camera{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::BatchCullingViewType UnityEngine::Rendering::BatchCullingViewType::Light{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::BatchCullingViewType UnityEngine::Rendering::BatchCullingViewType::Picking{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::BatchCullingViewType UnityEngine::Rendering::BatchCullingViewType::SelectionOutline{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::BatchCullingViewType UnityEngine::Rendering::BatchCullingViewType::Filtering{ static_cast<int32_t>(0x5) };
