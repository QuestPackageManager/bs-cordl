#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureSlotCount.hpp"
#include "UnityEngine/UIElements/zzzz__TextureSlotCount_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::TextureSlotCount::TextureSlotCount(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextureSlotCount::TextureSlotCount() {}
constexpr ::UnityEngine::UIElements::TextureSlotCount UnityEngine::UIElements::TextureSlotCount::One{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::TextureSlotCount UnityEngine::UIElements::TextureSlotCount::Two{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::TextureSlotCount UnityEngine::UIElements::TextureSlotCount::Four{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::TextureSlotCount UnityEngine::UIElements::TextureSlotCount::Eight{ static_cast<int32_t>(0x8) };
