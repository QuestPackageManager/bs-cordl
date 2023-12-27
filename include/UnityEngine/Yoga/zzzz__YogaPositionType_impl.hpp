#pragma once
#include "UnityEngine/Yoga/zzzz__YogaPositionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaPositionType::YogaPositionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaPositionType::YogaPositionType() {}
constexpr ::UnityEngine::Yoga::YogaPositionType UnityEngine::Yoga::YogaPositionType::Relative{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaPositionType UnityEngine::Yoga::YogaPositionType::Absolute{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
