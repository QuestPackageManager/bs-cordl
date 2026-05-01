#pragma once
// IWYU pragma private; include "Unity/Properties/TypeGenerationOptions.hpp"
#include "Unity/Properties/zzzz__TypeGenerationOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::TypeGenerationOptions::TypeGenerationOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeGenerationOptions::TypeGenerationOptions() {}
constexpr ::Unity::Properties::TypeGenerationOptions Unity::Properties::TypeGenerationOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Properties::TypeGenerationOptions Unity::Properties::TypeGenerationOptions::ValueType{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Properties::TypeGenerationOptions Unity::Properties::TypeGenerationOptions::ReferenceType{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Properties::TypeGenerationOptions Unity::Properties::TypeGenerationOptions::Default{ static_cast<int32_t>(0x6) };
