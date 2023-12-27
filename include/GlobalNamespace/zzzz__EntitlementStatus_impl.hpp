#pragma once
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EntitlementStatus::EntitlementStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EntitlementStatus::EntitlementStatus() {}
constexpr ::GlobalNamespace::EntitlementStatus GlobalNamespace::EntitlementStatus::Failed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EntitlementStatus GlobalNamespace::EntitlementStatus::Owned{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EntitlementStatus GlobalNamespace::EntitlementStatus::NotOwned{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
