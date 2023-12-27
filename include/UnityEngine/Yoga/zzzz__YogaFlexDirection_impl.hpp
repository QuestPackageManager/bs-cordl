#pragma once
#include "UnityEngine/Yoga/zzzz__YogaFlexDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaFlexDirection::YogaFlexDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaFlexDirection::YogaFlexDirection() {}
constexpr ::UnityEngine::Yoga::YogaFlexDirection UnityEngine::Yoga::YogaFlexDirection::Column{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaFlexDirection UnityEngine::Yoga::YogaFlexDirection::ColumnReverse{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaFlexDirection UnityEngine::Yoga::YogaFlexDirection::Row{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Yoga::YogaFlexDirection UnityEngine::Yoga::YogaFlexDirection::RowReverse{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
