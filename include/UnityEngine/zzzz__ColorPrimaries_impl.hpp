#pragma once
// IWYU pragma private; include "UnityEngine/ColorPrimaries.hpp"
#include "UnityEngine/zzzz__ColorPrimaries_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ColorPrimaries::ColorPrimaries(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorPrimaries::ColorPrimaries() {}
constexpr ::UnityEngine::ColorPrimaries UnityEngine::ColorPrimaries::Unknown{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::ColorPrimaries UnityEngine::ColorPrimaries::Rec709{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ColorPrimaries UnityEngine::ColorPrimaries::Rec2020{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ColorPrimaries UnityEngine::ColorPrimaries::P3{ static_cast<int32_t>(0x2) };
