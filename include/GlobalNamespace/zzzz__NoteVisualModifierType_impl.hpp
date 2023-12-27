#pragma once
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteVisualModifierType::NoteVisualModifierType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteVisualModifierType::NoteVisualModifierType() {}
constexpr ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::NoteVisualModifierType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::NoteVisualModifierType::DisappearingArrow{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::NoteVisualModifierType::Ghost{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
