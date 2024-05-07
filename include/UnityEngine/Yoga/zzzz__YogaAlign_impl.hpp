#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaAlign.hpp"
#include "UnityEngine/Yoga/zzzz__YogaAlign_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaAlign::YogaAlign(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaAlign::YogaAlign() {}
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::FlexStart{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::Center{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::FlexEnd{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::Stretch{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::Baseline{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::SpaceBetween{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Yoga::YogaAlign UnityEngine::Yoga::YogaAlign::SpaceAround{ static_cast<int32_t>(0x7) };
