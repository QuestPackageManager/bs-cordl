#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Justify.hpp"
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Justify::Justify(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Justify::Justify() {}
constexpr ::UnityEngine::UIElements::Justify UnityEngine::UIElements::Justify::FlexStart{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Justify UnityEngine::UIElements::Justify::Center{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Justify UnityEngine::UIElements::Justify::FlexEnd{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Justify UnityEngine::UIElements::Justify::SpaceBetween{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::Justify UnityEngine::UIElements::Justify::SpaceAround{ static_cast<int32_t>(0x4) };
