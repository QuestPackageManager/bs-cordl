#pragma once
#include "UnityEngine/Yoga/zzzz__YogaMeasureMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaMeasureMode::YogaMeasureMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaMeasureMode::YogaMeasureMode() {}
constexpr ::UnityEngine::Yoga::YogaMeasureMode UnityEngine::Yoga::YogaMeasureMode::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaMeasureMode UnityEngine::Yoga::YogaMeasureMode::Exactly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaMeasureMode UnityEngine::Yoga::YogaMeasureMode::AtMost{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
