#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionPhase.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionPhase::InputActionPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionPhase::InputActionPhase()   {
}
constexpr ::UnityEngine::InputSystem::InputActionPhase  UnityEngine::InputSystem::InputActionPhase::Disabled{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::InputActionPhase  UnityEngine::InputSystem::InputActionPhase::Waiting{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::InputActionPhase  UnityEngine::InputSystem::InputActionPhase::Started{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::InputActionPhase  UnityEngine::InputSystem::InputActionPhase::Performed{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::InputActionPhase  UnityEngine::InputSystem::InputActionPhase::Canceled{static_cast<int32_t>(0x4)};
