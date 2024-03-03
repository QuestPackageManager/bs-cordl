#pragma once
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorType::ColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorType::ColorType() {}
constexpr ::GlobalNamespace::ColorType GlobalNamespace::ColorType::ColorA{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ColorType GlobalNamespace::ColorType::ColorB{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ColorType GlobalNamespace::ColorType::None{ static_cast<int32_t>(0xffffffff) };
