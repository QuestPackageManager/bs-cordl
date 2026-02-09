#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/TouchPhase.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::TouchPhase::TouchPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::TouchPhase::TouchPhase()   {
}
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Began{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Moved{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Ended{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Canceled{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::TouchPhase  UnityEngine::InputSystem::TouchPhase::Stationary{static_cast<int32_t>(0x5)};
