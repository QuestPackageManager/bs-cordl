#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/HandleOrientation.hpp"
#include "UnityEngine/ProBuilder/zzzz__HandleOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::HandleOrientation::HandleOrientation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::HandleOrientation::HandleOrientation() {}
constexpr ::UnityEngine::ProBuilder::HandleOrientation UnityEngine::ProBuilder::HandleOrientation::World{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::HandleOrientation UnityEngine::ProBuilder::HandleOrientation::ActiveObject{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::HandleOrientation UnityEngine::ProBuilder::HandleOrientation::ActiveElement{ static_cast<int32_t>(0x2) };
