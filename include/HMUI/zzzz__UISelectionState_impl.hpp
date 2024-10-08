#pragma once
// IWYU pragma private; include "HMUI/UISelectionState.hpp"
#include "HMUI/zzzz__UISelectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::UISelectionState::UISelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::UISelectionState::UISelectionState() {}
constexpr ::HMUI::UISelectionState HMUI::UISelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::UISelectionState HMUI::UISelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::UISelectionState HMUI::UISelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::UISelectionState HMUI::UISelectionState::Selected{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::UISelectionState HMUI::UISelectionState::SelectedAndHighlighted{ static_cast<int32_t>(0x4) };
constexpr ::HMUI::UISelectionState HMUI::UISelectionState::Disabled{ static_cast<int32_t>(0x5) };
