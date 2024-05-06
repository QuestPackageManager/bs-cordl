#pragma once
// IWYU pragma private; include "GlobalNamespace/EntitlementsStatus.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EntitlementsStatus::EntitlementsStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EntitlementsStatus::EntitlementsStatus() {}
constexpr ::GlobalNamespace::EntitlementsStatus GlobalNamespace::EntitlementsStatus::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EntitlementsStatus GlobalNamespace::EntitlementsStatus::NotOwned{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EntitlementsStatus GlobalNamespace::EntitlementsStatus::NotDownloaded{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::EntitlementsStatus GlobalNamespace::EntitlementsStatus::Ok{ static_cast<int32_t>(0x3) };
