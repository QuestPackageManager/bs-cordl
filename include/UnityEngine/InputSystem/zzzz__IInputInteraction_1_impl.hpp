#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/IInputInteraction_1.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
template <typename TValue> constexpr UnityEngine::InputSystem::IInputInteraction_1<TValue>::operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
template <typename TValue> constexpr ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::InputSystem::IInputInteraction_1<TValue>::i___UnityEngine__InputSystem__IInputInteraction() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
