#pragma once
#include "UnityEngine/zzzz__TransparencySortMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TransparencySortMode::TransparencySortMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TransparencySortMode::TransparencySortMode() {}
constexpr ::UnityEngine::TransparencySortMode UnityEngine::TransparencySortMode::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TransparencySortMode UnityEngine::TransparencySortMode::Perspective{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TransparencySortMode UnityEngine::TransparencySortMode::Orthographic{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TransparencySortMode UnityEngine::TransparencySortMode::CustomAxis{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
