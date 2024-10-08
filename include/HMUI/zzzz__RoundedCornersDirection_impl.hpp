#pragma once
// IWYU pragma private; include "HMUI/RoundedCornersDirection.hpp"
#include "HMUI/zzzz__RoundedCornersDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::RoundedCornersDirection::RoundedCornersDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::RoundedCornersDirection::RoundedCornersDirection() {}
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::All{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::Up{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::UpRight{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::Right{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::DownRight{ static_cast<int32_t>(0x4) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::Down{ static_cast<int32_t>(0x5) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::DownLeft{ static_cast<int32_t>(0x6) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::Left{ static_cast<int32_t>(0x7) };
constexpr ::HMUI::RoundedCornersDirection HMUI::RoundedCornersDirection::UpLeft{ static_cast<int32_t>(0x8) };
