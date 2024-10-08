#pragma once
// IWYU pragma private; include "GlobalNamespace/PackBuyOption.hpp"
#include "GlobalNamespace/zzzz__PackBuyOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PackBuyOption::PackBuyOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackBuyOption::PackBuyOption() {}
constexpr ::GlobalNamespace::PackBuyOption GlobalNamespace::PackBuyOption::Default{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PackBuyOption GlobalNamespace::PackBuyOption::DisableBuyOption{ static_cast<int32_t>(0x1) };
