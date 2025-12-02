#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FastMemoryFlags.hpp"
#include "UnityEngine/Rendering/zzzz__FastMemoryFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FastMemoryFlags::FastMemoryFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FastMemoryFlags::FastMemoryFlags() {}
constexpr ::UnityEngine::Rendering::FastMemoryFlags UnityEngine::Rendering::FastMemoryFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::FastMemoryFlags UnityEngine::Rendering::FastMemoryFlags::SpillTop{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::FastMemoryFlags UnityEngine::Rendering::FastMemoryFlags::SpillBottom{ static_cast<int32_t>(0x2) };
