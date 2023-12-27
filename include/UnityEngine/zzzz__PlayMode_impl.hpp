#pragma once
#include "UnityEngine/zzzz__PlayMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlayMode::PlayMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlayMode::PlayMode() {}
constexpr ::UnityEngine::PlayMode UnityEngine::PlayMode::StopSameLayer{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::PlayMode UnityEngine::PlayMode::StopAll{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
