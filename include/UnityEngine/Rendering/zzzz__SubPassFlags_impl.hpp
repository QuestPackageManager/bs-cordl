#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SubPassFlags.hpp"
#include "UnityEngine/Rendering/zzzz__SubPassFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SubPassFlags::SubPassFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SubPassFlags::SubPassFlags() {}
constexpr ::UnityEngine::Rendering::SubPassFlags UnityEngine::Rendering::SubPassFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SubPassFlags UnityEngine::Rendering::SubPassFlags::ReadOnlyDepth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::SubPassFlags UnityEngine::Rendering::SubPassFlags::ReadOnlyStencil{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::SubPassFlags UnityEngine::Rendering::SubPassFlags::ReadOnlyDepthStencil{ static_cast<int32_t>(0x6) };
