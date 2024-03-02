#pragma once
#include "UnityEngine/ProBuilder/zzzz__Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Axis::Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Axis::Axis() {}
constexpr ::UnityEngine::ProBuilder::Axis UnityEngine::ProBuilder::Axis::Right{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::Axis UnityEngine::ProBuilder::Axis::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::Axis UnityEngine::ProBuilder::Axis::Up{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::Axis UnityEngine::ProBuilder::Axis::Down{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ProBuilder::Axis UnityEngine::ProBuilder::Axis::Forward{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::Axis UnityEngine::ProBuilder::Axis::Backward{ static_cast<int32_t>(0x5) };
