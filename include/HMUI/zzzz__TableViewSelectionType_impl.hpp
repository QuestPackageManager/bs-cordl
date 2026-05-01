#pragma once
// IWYU pragma private; include "HMUI/TableViewSelectionType.hpp"
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::TableViewSelectionType::TableViewSelectionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::TableViewSelectionType::TableViewSelectionType() {}
constexpr ::HMUI::TableViewSelectionType HMUI::TableViewSelectionType::None{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::TableViewSelectionType HMUI::TableViewSelectionType::Single{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::TableViewSelectionType HMUI::TableViewSelectionType::Multiple{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::TableViewSelectionType HMUI::TableViewSelectionType::DeselectableSingle{ static_cast<int32_t>(0x3) };
