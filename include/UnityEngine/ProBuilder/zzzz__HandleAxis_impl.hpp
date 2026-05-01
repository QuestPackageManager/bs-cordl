#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/HandleAxis.hpp"
#include "UnityEngine/ProBuilder/zzzz__HandleAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::HandleAxis::HandleAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::HandleAxis::HandleAxis() {}
constexpr ::UnityEngine::ProBuilder::HandleAxis UnityEngine::ProBuilder::HandleAxis::X{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::HandleAxis UnityEngine::ProBuilder::HandleAxis::Y{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::HandleAxis UnityEngine::ProBuilder::HandleAxis::Z{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::HandleAxis UnityEngine::ProBuilder::HandleAxis::Free{ static_cast<int32_t>(0x8) };
