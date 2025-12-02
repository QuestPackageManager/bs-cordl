#pragma once
// IWYU pragma private; include "GlobalNamespace/HardwareCategory.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HardwareCategory::HardwareCategory(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HardwareCategory::HardwareCategory() {}
constexpr ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategory::Standalone{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategory::Quest1{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategory::Quest2{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategory::Quest3{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategory::QuestPro{ static_cast<int32_t>(0x4) };
