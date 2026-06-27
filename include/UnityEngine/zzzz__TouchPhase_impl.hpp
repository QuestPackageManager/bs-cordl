#pragma once
// IWYU pragma private; include "UnityEngine/TouchPhase.hpp"
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchPhase::TouchPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TouchPhase::TouchPhase()   {
}
constexpr ::UnityEngine::TouchPhase  UnityEngine::TouchPhase::Began{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TouchPhase  UnityEngine::TouchPhase::Moved{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TouchPhase  UnityEngine::TouchPhase::Stationary{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TouchPhase  UnityEngine::TouchPhase::Ended{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TouchPhase  UnityEngine::TouchPhase::Canceled{static_cast<int32_t>(0x4)};
