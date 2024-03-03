#pragma once
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformEnvironment::PlatformEnvironment(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformEnvironment::PlatformEnvironment() {}
constexpr ::GlobalNamespace::PlatformEnvironment GlobalNamespace::PlatformEnvironment::Development{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::PlatformEnvironment GlobalNamespace::PlatformEnvironment::Certification{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::PlatformEnvironment GlobalNamespace::PlatformEnvironment::Production{ static_cast<uint8_t>(0x2u) };
