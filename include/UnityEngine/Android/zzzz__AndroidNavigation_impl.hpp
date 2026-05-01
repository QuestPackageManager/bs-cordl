#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidNavigation.hpp"
#include "UnityEngine/Android/zzzz__AndroidNavigation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidNavigation::AndroidNavigation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidNavigation::AndroidNavigation() {}
constexpr ::UnityEngine::Android::AndroidNavigation UnityEngine::Android::AndroidNavigation::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidNavigation UnityEngine::Android::AndroidNavigation::NoNav{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::AndroidNavigation UnityEngine::Android::AndroidNavigation::Dpad{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Android::AndroidNavigation UnityEngine::Android::AndroidNavigation::TrackBall{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Android::AndroidNavigation UnityEngine::Android::AndroidNavigation::Wheel{ static_cast<int32_t>(0x4) };
