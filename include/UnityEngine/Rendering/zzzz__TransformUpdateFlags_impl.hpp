#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TransformUpdateFlags.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::TransformUpdateFlags::TransformUpdateFlags(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TransformUpdateFlags::TransformUpdateFlags() {}
constexpr ::UnityEngine::Rendering::TransformUpdateFlags UnityEngine::Rendering::TransformUpdateFlags::None{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::Rendering::TransformUpdateFlags UnityEngine::Rendering::TransformUpdateFlags::HasLightProbeCombined{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::Rendering::TransformUpdateFlags UnityEngine::Rendering::TransformUpdateFlags::IsPartOfStaticBatch{ static_cast<uint8_t>(0x2u) };
