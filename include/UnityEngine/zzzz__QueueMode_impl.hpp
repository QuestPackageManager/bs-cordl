#pragma once
#include "UnityEngine/zzzz__QueueMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::QueueMode::QueueMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::QueueMode::QueueMode() {}
constexpr ::UnityEngine::QueueMode UnityEngine::QueueMode::CompleteOthers{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::QueueMode UnityEngine::QueueMode::PlayNow{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
