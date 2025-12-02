#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugAction.hpp"
#include "UnityEngine/Rendering/zzzz__DebugAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DebugAction::DebugAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugAction::DebugAction() {}
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::EnableDebugMenu{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::PreviousDebugPanel{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::NextDebugPanel{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::Action{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::MakePersistent{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::MoveVertical{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::MoveHorizontal{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::Multiplier{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::ResetAll{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::DebugAction UnityEngine::Rendering::DebugAction::DebugActionCount{ static_cast<int32_t>(0x9) };
