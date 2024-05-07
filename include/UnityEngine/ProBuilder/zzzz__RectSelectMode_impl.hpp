#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/RectSelectMode.hpp"
#include "UnityEngine/ProBuilder/zzzz__RectSelectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::RectSelectMode::RectSelectMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::RectSelectMode::RectSelectMode() {}
constexpr ::UnityEngine::ProBuilder::RectSelectMode UnityEngine::ProBuilder::RectSelectMode::Partial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::RectSelectMode UnityEngine::ProBuilder::RectSelectMode::Complete{ static_cast<int32_t>(0x1) };
