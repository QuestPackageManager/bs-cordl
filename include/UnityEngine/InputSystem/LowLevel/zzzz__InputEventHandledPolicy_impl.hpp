#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventHandledPolicy.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventHandledPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventHandledPolicy::InputEventHandledPolicy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventHandledPolicy::InputEventHandledPolicy() {}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventHandledPolicy UnityEngine::InputSystem::LowLevel::InputEventHandledPolicy::SuppressStateUpdates{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventHandledPolicy UnityEngine::InputSystem::LowLevel::InputEventHandledPolicy::SuppressActionEventNotifications{ static_cast<int32_t>(0x1) };
