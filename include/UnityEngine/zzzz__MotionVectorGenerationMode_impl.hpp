#pragma once
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::MotionVectorGenerationMode::MotionVectorGenerationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::MotionVectorGenerationMode::MotionVectorGenerationMode() {}
constexpr ::UnityEngine::MotionVectorGenerationMode UnityEngine::MotionVectorGenerationMode::Camera{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::MotionVectorGenerationMode UnityEngine::MotionVectorGenerationMode::Object{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::MotionVectorGenerationMode UnityEngine::MotionVectorGenerationMode::ForceNoMotion{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
