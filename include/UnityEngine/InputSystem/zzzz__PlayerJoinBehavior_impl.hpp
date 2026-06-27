#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/PlayerJoinBehavior.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerJoinBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior::PlayerJoinBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior::PlayerJoinBehavior()   {
}
constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior  UnityEngine::InputSystem::PlayerJoinBehavior::JoinPlayersWhenButtonIsPressed{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior  UnityEngine::InputSystem::PlayerJoinBehavior::JoinPlayersWhenJoinActionIsTriggered{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior  UnityEngine::InputSystem::PlayerJoinBehavior::JoinPlayersManually{static_cast<int32_t>(0x2)};
