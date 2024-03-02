#pragma once
#include "UnityOpus/zzzz__NumChannels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::NumChannels::NumChannels(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityOpus::NumChannels::NumChannels() {}
constexpr ::UnityOpus::NumChannels UnityOpus::NumChannels::Mono{ static_cast<int32_t>(0x1) };
constexpr ::UnityOpus::NumChannels UnityOpus::NumChannels::Stereo{ static_cast<int32_t>(0x2) };
