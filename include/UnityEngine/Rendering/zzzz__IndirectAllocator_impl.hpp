#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectAllocator.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectAllocator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectAllocator::IndirectAllocator(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectAllocator::IndirectAllocator() {}
constexpr ::UnityEngine::Rendering::IndirectAllocator UnityEngine::Rendering::IndirectAllocator::NextInstanceIndex{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::IndirectAllocator UnityEngine::Rendering::IndirectAllocator::NextDrawIndex{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::IndirectAllocator UnityEngine::Rendering::IndirectAllocator::Count{ static_cast<int32_t>(0x2) };
