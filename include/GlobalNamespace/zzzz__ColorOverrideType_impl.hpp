#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorOverrideType.hpp"
#include "GlobalNamespace/zzzz__ColorOverrideType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ColorOverrideType::ColorOverrideType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorOverrideType::ColorOverrideType() {}
constexpr ::GlobalNamespace::ColorOverrideType GlobalNamespace::ColorOverrideType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ColorOverrideType GlobalNamespace::ColorOverrideType::NotesOnly{ static_cast<int32_t>(0x1) };
