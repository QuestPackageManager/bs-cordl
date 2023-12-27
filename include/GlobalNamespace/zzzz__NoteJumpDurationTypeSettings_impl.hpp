#pragma once
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteJumpDurationTypeSettings::NoteJumpDurationTypeSettings(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteJumpDurationTypeSettings::NoteJumpDurationTypeSettings() {}
constexpr ::GlobalNamespace::NoteJumpDurationTypeSettings GlobalNamespace::NoteJumpDurationTypeSettings::Dynamic{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteJumpDurationTypeSettings GlobalNamespace::NoteJumpDurationTypeSettings::Static{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
