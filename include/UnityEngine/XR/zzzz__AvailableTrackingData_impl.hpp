#pragma once
// IWYU pragma private; include "UnityEngine/XR/AvailableTrackingData.hpp"
#include "UnityEngine/XR/zzzz__AvailableTrackingData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::AvailableTrackingData::AvailableTrackingData(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::AvailableTrackingData::AvailableTrackingData()   {
}
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::PositionAvailable{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::RotationAvailable{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::VelocityAvailable{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::AngularVelocityAvailable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::AccelerationAvailable{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::AngularAccelerationAvailable{static_cast<int32_t>(0x20)};
