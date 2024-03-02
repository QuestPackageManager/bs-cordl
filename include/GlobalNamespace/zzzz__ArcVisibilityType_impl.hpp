#pragma once
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ArcVisibilityType::ArcVisibilityType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcVisibilityType::ArcVisibilityType() {}
constexpr ::GlobalNamespace::ArcVisibilityType GlobalNamespace::ArcVisibilityType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ArcVisibilityType GlobalNamespace::ArcVisibilityType::Low{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ArcVisibilityType GlobalNamespace::ArcVisibilityType::Standard{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::ArcVisibilityType GlobalNamespace::ArcVisibilityType::High{ static_cast<int32_t>(0x3) };
