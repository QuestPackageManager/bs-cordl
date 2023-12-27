#pragma once
#include "UnityEngine/Yoga/zzzz__YogaUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaUnit::YogaUnit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaUnit::YogaUnit() {}
constexpr ::UnityEngine::Yoga::YogaUnit UnityEngine::Yoga::YogaUnit::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaUnit UnityEngine::Yoga::YogaUnit::Point{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaUnit UnityEngine::Yoga::YogaUnit::Percent{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Yoga::YogaUnit UnityEngine::Yoga::YogaUnit::Auto{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
