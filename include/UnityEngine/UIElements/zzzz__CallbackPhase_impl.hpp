#pragma once
#include "UnityEngine/UIElements/zzzz__CallbackPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CallbackPhase::CallbackPhase(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CallbackPhase::CallbackPhase() {}
constexpr ::UnityEngine::UIElements::CallbackPhase UnityEngine::UIElements::CallbackPhase::TargetAndBubbleUp{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::CallbackPhase UnityEngine::UIElements::CallbackPhase::TrickleDownAndTarget{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
