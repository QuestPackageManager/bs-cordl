#pragma once
// IWYU pragma private; include "UnityEngine/ThreadPriority.hpp"
#include "UnityEngine/zzzz__ThreadPriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ThreadPriority::ThreadPriority(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ThreadPriority::ThreadPriority() {}
constexpr ::UnityEngine::ThreadPriority UnityEngine::ThreadPriority::Low{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ThreadPriority UnityEngine::ThreadPriority::BelowNormal{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ThreadPriority UnityEngine::ThreadPriority::Normal{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ThreadPriority UnityEngine::ThreadPriority::High{ static_cast<int32_t>(0x4) };
