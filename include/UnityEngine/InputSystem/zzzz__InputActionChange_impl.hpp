#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionChange.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionChange::InputActionChange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionChange::InputActionChange()   {
}
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionEnabled{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionDisabled{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionMapEnabled{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionMapDisabled{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionStarted{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionPerformed{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionCanceled{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::BoundControlsAboutToChange{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::BoundControlsChanged{static_cast<int32_t>(0x8)};
