#pragma once
// IWYU pragma private; include "GlobalNamespace/ComparisonOperation.hpp"
#include "GlobalNamespace/zzzz__ComparisonOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ComparisonOperation::ComparisonOperation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComparisonOperation::ComparisonOperation() {}
constexpr ::GlobalNamespace::ComparisonOperation GlobalNamespace::ComparisonOperation::Equal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ComparisonOperation GlobalNamespace::ComparisonOperation::NotEqual{ static_cast<int32_t>(0x1) };
