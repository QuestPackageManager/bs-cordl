#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextAutoSizeMode.hpp"
#include "UnityEngine/UIElements/zzzz__TextAutoSizeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::TextAutoSizeMode::TextAutoSizeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextAutoSizeMode::TextAutoSizeMode() {}
constexpr ::UnityEngine::UIElements::TextAutoSizeMode UnityEngine::UIElements::TextAutoSizeMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::TextAutoSizeMode UnityEngine::UIElements::TextAutoSizeMode::BestFit{ static_cast<int32_t>(0x1) };
