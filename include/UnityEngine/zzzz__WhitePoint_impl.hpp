#pragma once
// IWYU pragma private; include "UnityEngine/WhitePoint.hpp"
#include "UnityEngine/zzzz__WhitePoint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::WhitePoint::WhitePoint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::WhitePoint::WhitePoint() {}
constexpr ::UnityEngine::WhitePoint UnityEngine::WhitePoint::Unknown{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::WhitePoint UnityEngine::WhitePoint::D65{ static_cast<int32_t>(0x0) };
