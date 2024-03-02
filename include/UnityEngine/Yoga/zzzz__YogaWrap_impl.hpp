#pragma once
#include "UnityEngine/Yoga/zzzz__YogaWrap_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaWrap::YogaWrap(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaWrap::YogaWrap() {}
constexpr ::UnityEngine::Yoga::YogaWrap UnityEngine::Yoga::YogaWrap::NoWrap{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaWrap UnityEngine::Yoga::YogaWrap::Wrap{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaWrap UnityEngine::Yoga::YogaWrap::WrapReverse{ static_cast<int32_t>(0x2) };
