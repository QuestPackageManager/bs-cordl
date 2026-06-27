#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Interactions/PressBehavior.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__PressBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior::PressBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior::PressBehavior()   {
}
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior  UnityEngine::InputSystem::Interactions::PressBehavior::PressOnly{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior  UnityEngine::InputSystem::Interactions::PressBehavior::ReleaseOnly{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior  UnityEngine::InputSystem::Interactions::PressBehavior::PressAndRelease{static_cast<int32_t>(0x2)};
