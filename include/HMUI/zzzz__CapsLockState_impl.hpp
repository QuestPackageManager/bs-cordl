#pragma once
// IWYU pragma private; include "HMUI/CapsLockState.hpp"
#include "HMUI/zzzz__CapsLockState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::CapsLockState::CapsLockState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::CapsLockState::CapsLockState() {}
constexpr ::HMUI::CapsLockState HMUI::CapsLockState::Lowercase{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::CapsLockState HMUI::CapsLockState::UppercaseOnce{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::CapsLockState HMUI::CapsLockState::Uppercase{ static_cast<int32_t>(0x2) };
