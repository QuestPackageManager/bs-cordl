#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Interactions/MultiTapInteraction.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__MultiTapInteraction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::__MultiTapInteraction__TapPhase(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::__MultiTapInteraction__TapPhase() {}
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::WaitingForNextRelease{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase::WaitingForNextPress{ static_cast<int32_t>(
    0x2) };
