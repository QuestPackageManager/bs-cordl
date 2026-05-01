#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorChangeUIEventType::ColorChangeUIEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorChangeUIEventType::ColorChangeUIEventType() {}
constexpr ::GlobalNamespace::ColorChangeUIEventType GlobalNamespace::ColorChangeUIEventType::Drag{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ColorChangeUIEventType GlobalNamespace::ColorChangeUIEventType::PointerUp{ static_cast<int32_t>(0x1) };
