#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDeviceCharacteristics.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputDeviceCharacteristics::InputDeviceCharacteristics(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDeviceCharacteristics::InputDeviceCharacteristics() {}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::None{ static_cast<uint32_t>(0x4020100u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::HeadMounted{ static_cast<uint32_t>(0x8040201u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::Camera{ static_cast<uint32_t>(0x10080402u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::HeldInHand{ static_cast<uint32_t>(0x20100804u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::HandTracking{ static_cast<uint32_t>(0x40201008u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::EyeTracking{ static_cast<uint32_t>(0x80402010u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::TrackedDevice{ static_cast<uint32_t>(0x80804020u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::Controller{ static_cast<uint32_t>(0x81808040u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::TrackingReference{ static_cast<uint32_t>(0x818080u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::Left{ static_cast<uint32_t>(0x820081u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::Right{ static_cast<uint32_t>(0x840082u) };
constexpr ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDeviceCharacteristics::Simulated6DOF{ static_cast<uint32_t>(0x1000084u) };
