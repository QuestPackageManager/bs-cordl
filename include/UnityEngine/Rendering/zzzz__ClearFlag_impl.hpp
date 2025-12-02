#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ClearFlag.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ClearFlag::ClearFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ClearFlag::ClearFlag() {}
constexpr ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::ClearFlag::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::ClearFlag::Color{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::ClearFlag::Depth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::ClearFlag::Stencil{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::ClearFlag::DepthStencil{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::ClearFlag::ColorStencil{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::ClearFlag::All{ static_cast<int32_t>(0x7) };
