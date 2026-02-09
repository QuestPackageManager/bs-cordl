#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEventCallState.hpp"
#include "UnityEngine/Events/zzzz__UnityEventCallState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Events::UnityEventCallState::UnityEventCallState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::UnityEventCallState::UnityEventCallState()   {
}
constexpr ::UnityEngine::Events::UnityEventCallState  UnityEngine::Events::UnityEventCallState::Off{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Events::UnityEventCallState  UnityEngine::Events::UnityEventCallState::EditorAndRuntime{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Events::UnityEventCallState  UnityEngine::Events::UnityEventCallState::RuntimeOnly{static_cast<int32_t>(0x2)};
