#pragma once
// IWYU pragma private; include "TMPro/TextWrappingModes.hpp"
#include "TMPro/zzzz__TextWrappingModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextWrappingModes::TextWrappingModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TextWrappingModes::TextWrappingModes() {}
constexpr ::TMPro::TextWrappingModes TMPro::TextWrappingModes::NoWrap{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::TextWrappingModes TMPro::TextWrappingModes::Normal{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::TextWrappingModes TMPro::TextWrappingModes::PreserveWhitespace{ static_cast<int32_t>(0x2) };
constexpr ::TMPro::TextWrappingModes TMPro::TextWrappingModes::PreserveWhitespaceNoWrap{ static_cast<int32_t>(0x3) };
