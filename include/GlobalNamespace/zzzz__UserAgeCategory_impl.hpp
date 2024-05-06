#pragma once
// IWYU pragma private; include "GlobalNamespace/UserAgeCategory.hpp"
#include "GlobalNamespace/zzzz__UserAgeCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UserAgeCategory::UserAgeCategory(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserAgeCategory::UserAgeCategory() {}
constexpr ::GlobalNamespace::UserAgeCategory GlobalNamespace::UserAgeCategory::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::UserAgeCategory GlobalNamespace::UserAgeCategory::Child{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::UserAgeCategory GlobalNamespace::UserAgeCategory::Teen{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::UserAgeCategory GlobalNamespace::UserAgeCategory::Adult{ static_cast<int32_t>(0x3) };
