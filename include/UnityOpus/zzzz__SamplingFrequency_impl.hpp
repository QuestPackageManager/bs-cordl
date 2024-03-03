#pragma once
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::SamplingFrequency::SamplingFrequency(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityOpus::SamplingFrequency::SamplingFrequency() {}
constexpr ::UnityOpus::SamplingFrequency UnityOpus::SamplingFrequency::Frequency_8000{ static_cast<int32_t>(0x1f40) };
constexpr ::UnityOpus::SamplingFrequency UnityOpus::SamplingFrequency::Frequency_12000{ static_cast<int32_t>(0x2ee0) };
constexpr ::UnityOpus::SamplingFrequency UnityOpus::SamplingFrequency::Frequency_16000{ static_cast<int32_t>(0x3e80) };
constexpr ::UnityOpus::SamplingFrequency UnityOpus::SamplingFrequency::Frequency_24000{ static_cast<int32_t>(0x5dc0) };
constexpr ::UnityOpus::SamplingFrequency UnityOpus::SamplingFrequency::Frequency_48000{ static_cast<int32_t>(0xbb80) };
