#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/IInputInteraction_1.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_1_def.hpp"
/// @brief Convert operator to "::cordl_internals::InterfaceW"
template<typename TValue>
constexpr  UnityEngine::InputSystem::IInputInteraction_1<TValue>::operator ::cordl_internals::InterfaceW*() noexcept {
return static_cast<::cordl_internals::InterfaceW*>(static_cast<void*>(this));
}
/// @brief Convert to "::cordl_internals::InterfaceW"
template<typename TValue>
constexpr ::cordl_internals::InterfaceW* UnityEngine::InputSystem::IInputInteraction_1<TValue>::i___cordl_internals__InterfaceW() noexcept {
return static_cast<::cordl_internals::InterfaceW*>(static_cast<void*>(this));
}
