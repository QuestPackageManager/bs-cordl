#pragma once
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ServiceEnvironment::ServiceEnvironment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServiceEnvironment::ServiceEnvironment() {}
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::Production{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::ReleaseCandidate{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::InternalPlayTest{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::QATesting{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::Development{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::ProductionA{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::ProductionB{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::DevelopmentA{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::DevelopmentB{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::ServiceEnvironment GlobalNamespace::ServiceEnvironment::ProductionC{ static_cast<int32_t>(0x9) };
