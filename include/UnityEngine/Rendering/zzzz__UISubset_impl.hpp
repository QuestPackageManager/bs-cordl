#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UISubset.hpp"
#include "UnityEngine/Rendering/zzzz__UISubset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::UISubset::UISubset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UISubset::UISubset() {}
constexpr ::UnityEngine::Rendering::UISubset UnityEngine::Rendering::UISubset::UIToolkit_UGUI{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::UISubset UnityEngine::Rendering::UISubset::LowLevel{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::UISubset UnityEngine::Rendering::UISubset::All{ static_cast<int32_t>(0xffffffff) };
