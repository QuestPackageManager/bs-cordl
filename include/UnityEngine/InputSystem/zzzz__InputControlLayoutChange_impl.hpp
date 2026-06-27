#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlLayoutChange.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange::InputControlLayoutChange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange::InputControlLayoutChange()   {
}
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange  UnityEngine::InputSystem::InputControlLayoutChange::Added{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange  UnityEngine::InputSystem::InputControlLayoutChange::Removed{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange  UnityEngine::InputSystem::InputControlLayoutChange::Replaced{static_cast<int32_t>(0x2)};
