#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDeviceCharacteristics.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputDeviceCharacteristics::InputDeviceCharacteristics(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDeviceCharacteristics::InputDeviceCharacteristics()   {
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::None{static_cast<uint32_t>(0x0u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::HeadMounted{static_cast<uint32_t>(0x1u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Camera{static_cast<uint32_t>(0x2u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::HeldInHand{static_cast<uint32_t>(0x4u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::HandTracking{static_cast<uint32_t>(0x8u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::EyeTracking{static_cast<uint32_t>(0x10u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::TrackedDevice{static_cast<uint32_t>(0x20u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Controller{static_cast<uint32_t>(0x40u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::TrackingReference{static_cast<uint32_t>(0x80u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Left{static_cast<uint32_t>(0x100u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Right{static_cast<uint32_t>(0x200u)};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Simulated6DOF{static_cast<uint32_t>(0x400u)};
