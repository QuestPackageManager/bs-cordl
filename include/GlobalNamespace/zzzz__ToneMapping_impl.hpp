#pragma once
// IWYU pragma private; include "GlobalNamespace/ToneMapping.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ToneMapping::ToneMapping(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ToneMapping::ToneMapping() {}
constexpr ::GlobalNamespace::ToneMapping GlobalNamespace::ToneMapping::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ToneMapping GlobalNamespace::ToneMapping::Aces{ static_cast<int32_t>(0x1) };
