#pragma once
// IWYU pragma private; include "GlobalNamespace/ProductDisplayMode.hpp"
#include "GlobalNamespace/zzzz__ProductDisplayMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProductDisplayMode::ProductDisplayMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProductDisplayMode::ProductDisplayMode() {}
constexpr ::GlobalNamespace::ProductDisplayMode GlobalNamespace::ProductDisplayMode::Always{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ProductDisplayMode GlobalNamespace::ProductDisplayMode::WhenOwned{ static_cast<int32_t>(0x1) };
