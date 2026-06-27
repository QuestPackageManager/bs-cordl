#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTrackingState.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputTrackingState::InputTrackingState(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputTrackingState::InputTrackingState()   {
}
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::None{static_cast<uint32_t>(0x0u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Position{static_cast<uint32_t>(0x1u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Rotation{static_cast<uint32_t>(0x2u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Velocity{static_cast<uint32_t>(0x4u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::AngularVelocity{static_cast<uint32_t>(0x8u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Acceleration{static_cast<uint32_t>(0x10u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::AngularAcceleration{static_cast<uint32_t>(0x20u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::All{static_cast<uint32_t>(0x3fu)};
