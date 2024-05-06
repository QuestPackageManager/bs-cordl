#pragma once
// IWYU pragma private; include "UnityEngine/LightType.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightType::LightType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightType::LightType() {}
constexpr ::UnityEngine::LightType UnityEngine::LightType::Spot{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LightType UnityEngine::LightType::Directional{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LightType UnityEngine::LightType::Point{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LightType UnityEngine::LightType::Area{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LightType UnityEngine::LightType::Rectangle{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LightType UnityEngine::LightType::Disc{ static_cast<int32_t>(0x4) };
