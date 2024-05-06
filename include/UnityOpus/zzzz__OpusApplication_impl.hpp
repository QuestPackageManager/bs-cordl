#pragma once
// IWYU pragma private; include "UnityOpus/OpusApplication.hpp"
#include "UnityOpus/zzzz__OpusApplication_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::OpusApplication::OpusApplication(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityOpus::OpusApplication::OpusApplication() {}
constexpr ::UnityOpus::OpusApplication UnityOpus::OpusApplication::VoIP{ static_cast<int32_t>(0x800) };
constexpr ::UnityOpus::OpusApplication UnityOpus::OpusApplication::Audio{ static_cast<int32_t>(0x801) };
constexpr ::UnityOpus::OpusApplication UnityOpus::OpusApplication::RestrictedLowDelay{ static_cast<int32_t>(0x803) };
