#pragma once
#include "GlobalNamespace/zzzz__PS4ApplicationCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PS4ApplicationCategory::PS4ApplicationCategory(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4ApplicationCategory::PS4ApplicationCategory() {}
constexpr ::GlobalNamespace::PS4ApplicationCategory GlobalNamespace::PS4ApplicationCategory::Application{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PS4ApplicationCategory GlobalNamespace::PS4ApplicationCategory::Patch{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PS4ApplicationCategory GlobalNamespace::PS4ApplicationCategory::Remaster{ static_cast<int32_t>(0x2) };
