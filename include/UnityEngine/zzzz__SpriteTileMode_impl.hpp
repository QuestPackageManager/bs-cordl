#pragma once
#include "UnityEngine/zzzz__SpriteTileMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpriteTileMode::SpriteTileMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpriteTileMode::SpriteTileMode() {}
constexpr ::UnityEngine::SpriteTileMode UnityEngine::SpriteTileMode::Continuous{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpriteTileMode UnityEngine::SpriteTileMode::Adaptive{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
