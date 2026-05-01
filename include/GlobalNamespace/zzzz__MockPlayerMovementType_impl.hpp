#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerMovementType.hpp"
#include "GlobalNamespace/zzzz__MockPlayerMovementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MockPlayerMovementType::MockPlayerMovementType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerMovementType::MockPlayerMovementType() {}
constexpr ::GlobalNamespace::MockPlayerMovementType GlobalNamespace::MockPlayerMovementType::AI{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MockPlayerMovementType GlobalNamespace::MockPlayerMovementType::MirrorPlayer{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MockPlayerMovementType GlobalNamespace::MockPlayerMovementType::Recording{ static_cast<int32_t>(0x2) };
