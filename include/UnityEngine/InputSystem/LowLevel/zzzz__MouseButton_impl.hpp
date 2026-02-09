#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/MouseButton.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__MouseButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton::MouseButton(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton::MouseButton()   {
}
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  UnityEngine::InputSystem::LowLevel::MouseButton::Left{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  UnityEngine::InputSystem::LowLevel::MouseButton::Right{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  UnityEngine::InputSystem::LowLevel::MouseButton::Middle{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  UnityEngine::InputSystem::LowLevel::MouseButton::Forward{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  UnityEngine::InputSystem::LowLevel::MouseButton::Back{static_cast<int32_t>(0x4)};
