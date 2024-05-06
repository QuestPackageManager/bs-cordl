#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteLineLayer.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteLineLayer::NoteLineLayer(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteLineLayer::NoteLineLayer() {}
constexpr ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteLineLayer::Base{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteLineLayer::Upper{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteLineLayer::Top{ static_cast<int32_t>(0x2) };
