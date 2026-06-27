#pragma once
// IWYU pragma private; include "UnityEngine/EventModifiers.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventModifiers::EventModifiers(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventModifiers::EventModifiers()   {
}
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Shift{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Control{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Alt{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Command{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::Numeric{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::CapsLock{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::EventModifiers  UnityEngine::EventModifiers::FunctionKey{static_cast<int32_t>(0x40)};
