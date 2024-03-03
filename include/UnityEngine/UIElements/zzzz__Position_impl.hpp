#pragma once
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Position::Position(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Position::Position() {}
constexpr ::UnityEngine::UIElements::Position UnityEngine::UIElements::Position::Relative{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Position UnityEngine::UIElements::Position::Absolute{ static_cast<int32_t>(0x1) };
