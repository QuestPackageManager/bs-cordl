#pragma once
#include "UnityEngine/Yoga/zzzz__YogaLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaLogLevel::YogaLogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::YogaLogLevel::YogaLogLevel() {}
constexpr ::UnityEngine::Yoga::YogaLogLevel UnityEngine::Yoga::YogaLogLevel::Error{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Yoga::YogaLogLevel UnityEngine::Yoga::YogaLogLevel::Warn{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Yoga::YogaLogLevel UnityEngine::Yoga::YogaLogLevel::Info{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Yoga::YogaLogLevel UnityEngine::Yoga::YogaLogLevel::Debug{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Yoga::YogaLogLevel UnityEngine::Yoga::YogaLogLevel::Verbose{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Yoga::YogaLogLevel UnityEngine::Yoga::YogaLogLevel::Fatal{ static_cast<int32_t>(0x5) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
