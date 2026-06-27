#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionType.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionType::InputActionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionType::InputActionType()   {
}
constexpr ::UnityEngine::InputSystem::InputActionType  UnityEngine::InputSystem::InputActionType::Value{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::InputActionType  UnityEngine::InputSystem::InputActionType::Button{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::InputActionType  UnityEngine::InputSystem::InputActionType::PassThrough{static_cast<int32_t>(0x2)};
