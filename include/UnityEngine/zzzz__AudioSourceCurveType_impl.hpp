#pragma once
#include "UnityEngine/zzzz__AudioSourceCurveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioSourceCurveType::AudioSourceCurveType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSourceCurveType::AudioSourceCurveType() {}
constexpr ::UnityEngine::AudioSourceCurveType UnityEngine::AudioSourceCurveType::CustomRolloff{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AudioSourceCurveType UnityEngine::AudioSourceCurveType::SpatialBlend{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AudioSourceCurveType UnityEngine::AudioSourceCurveType::ReverbZoneMix{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AudioSourceCurveType UnityEngine::AudioSourceCurveType::Spread{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
