#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/PlayerNotifications.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::PlayerNotifications::PlayerNotifications(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerNotifications::PlayerNotifications()   {
}
constexpr ::UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::SendMessages{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::BroadcastMessages{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::InvokeUnityEvents{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::InvokeCSharpEvents{static_cast<int32_t>(0x3)};
