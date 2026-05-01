#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SortMethod.hpp"
#include "UnityEngine/ProBuilder/zzzz__SortMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::SortMethod::SortMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SortMethod::SortMethod() {}
constexpr ::UnityEngine::ProBuilder::SortMethod UnityEngine::ProBuilder::SortMethod::Clockwise{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::SortMethod UnityEngine::ProBuilder::SortMethod::CounterClockwise{ static_cast<int32_t>(0x1) };
