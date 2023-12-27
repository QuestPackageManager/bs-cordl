#pragma once
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PropagationPhase::PropagationPhase(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropagationPhase::PropagationPhase() {}
constexpr ::UnityEngine::UIElements::PropagationPhase UnityEngine::UIElements::PropagationPhase::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::PropagationPhase UnityEngine::UIElements::PropagationPhase::TrickleDown{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::PropagationPhase UnityEngine::UIElements::PropagationPhase::AtTarget{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::PropagationPhase UnityEngine::UIElements::PropagationPhase::DefaultActionAtTarget{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::PropagationPhase UnityEngine::UIElements::PropagationPhase::BubbleUp{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::PropagationPhase UnityEngine::UIElements::PropagationPhase::DefaultAction{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
