#pragma once
// IWYU pragma private; include "GlobalNamespace/DiscoveryPolicy.hpp"
#include "GlobalNamespace/zzzz__DiscoveryPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DiscoveryPolicy::DiscoveryPolicy(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiscoveryPolicy::DiscoveryPolicy() {}
constexpr ::GlobalNamespace::DiscoveryPolicy GlobalNamespace::DiscoveryPolicy::Hidden{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::DiscoveryPolicy GlobalNamespace::DiscoveryPolicy::WithCode{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::DiscoveryPolicy GlobalNamespace::DiscoveryPolicy::Public{ static_cast<uint8_t>(0x2u) };
