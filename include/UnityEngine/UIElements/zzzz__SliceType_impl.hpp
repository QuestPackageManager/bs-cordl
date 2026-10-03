#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SliceType.hpp"
#include "UnityEngine/UIElements/zzzz__SliceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::SliceType::SliceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SliceType::SliceType() {}
constexpr ::UnityEngine::UIElements::SliceType UnityEngine::UIElements::SliceType::Sliced{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::SliceType UnityEngine::UIElements::SliceType::Tiled{ static_cast<int32_t>(0x1) };
