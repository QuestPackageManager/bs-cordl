#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RendererListStatus.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RendererListStatus::RendererListStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RendererListStatus::RendererListStatus() {}
constexpr ::UnityEngine::Rendering::RendererListStatus UnityEngine::Rendering::RendererListStatus::kRendererListInvalid{ static_cast<int32_t>(0xfffffffe) };
constexpr ::UnityEngine::Rendering::RendererListStatus UnityEngine::Rendering::RendererListStatus::kRendererListProcessing{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::Rendering::RendererListStatus UnityEngine::Rendering::RendererListStatus::kRendererListEmpty{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RendererListStatus UnityEngine::Rendering::RendererListStatus::kRendererListPopulated{ static_cast<int32_t>(0x1) };
