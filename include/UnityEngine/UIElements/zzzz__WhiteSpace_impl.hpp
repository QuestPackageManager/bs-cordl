#pragma once
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::WhiteSpace::WhiteSpace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WhiteSpace::WhiteSpace() {}
constexpr ::UnityEngine::UIElements::WhiteSpace UnityEngine::UIElements::WhiteSpace::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::WhiteSpace UnityEngine::UIElements::WhiteSpace::NoWrap{ static_cast<int32_t>(0x1) };
