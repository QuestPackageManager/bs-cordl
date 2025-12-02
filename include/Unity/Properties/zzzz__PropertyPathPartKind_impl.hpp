#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyPathPartKind.hpp"
#include "Unity/Properties/zzzz__PropertyPathPartKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::PropertyPathPartKind::PropertyPathPartKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyPathPartKind::PropertyPathPartKind() {}
constexpr ::Unity::Properties::PropertyPathPartKind Unity::Properties::PropertyPathPartKind::Name{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Properties::PropertyPathPartKind Unity::Properties::PropertyPathPartKind::Index{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Properties::PropertyPathPartKind Unity::Properties::PropertyPathPartKind::Key{ static_cast<int32_t>(0x2) };
