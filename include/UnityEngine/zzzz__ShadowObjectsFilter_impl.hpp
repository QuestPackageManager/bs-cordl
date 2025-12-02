#pragma once
// IWYU pragma private; include "UnityEngine/ShadowObjectsFilter.hpp"
#include "UnityEngine/zzzz__ShadowObjectsFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ShadowObjectsFilter::ShadowObjectsFilter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ShadowObjectsFilter::ShadowObjectsFilter() {}
constexpr ::UnityEngine::ShadowObjectsFilter UnityEngine::ShadowObjectsFilter::AllObjects{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ShadowObjectsFilter UnityEngine::ShadowObjectsFilter::DynamicOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ShadowObjectsFilter UnityEngine::ShadowObjectsFilter::StaticOnly{ static_cast<int32_t>(0x2) };
