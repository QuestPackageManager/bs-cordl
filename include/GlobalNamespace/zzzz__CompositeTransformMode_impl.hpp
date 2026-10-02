#pragma once
// IWYU pragma private; include "GlobalNamespace/CompositeTransformMode.hpp"
#include "GlobalNamespace/zzzz__CompositeTransformMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CompositeTransformMode::CompositeTransformMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeTransformMode::CompositeTransformMode() {}
constexpr ::GlobalNamespace::CompositeTransformMode GlobalNamespace::CompositeTransformMode::Override{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::CompositeTransformMode GlobalNamespace::CompositeTransformMode::Additive{ static_cast<int32_t>(0x1) };
