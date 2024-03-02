#pragma once
#include "UnityEngine/Yoga/zzzz__YogaJustify_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaJustify::YogaJustify(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaJustify::YogaJustify() {}
constexpr ::UnityEngine::Yoga::YogaJustify UnityEngine::Yoga::YogaJustify::FlexStart{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaJustify UnityEngine::Yoga::YogaJustify::Center{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaJustify UnityEngine::Yoga::YogaJustify::FlexEnd{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Yoga::YogaJustify UnityEngine::Yoga::YogaJustify::SpaceBetween{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Yoga::YogaJustify UnityEngine::Yoga::YogaJustify::SpaceAround{ static_cast<int32_t>(0x4) };
