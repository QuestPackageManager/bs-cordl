#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackingUniverseOrigin::ETrackingUniverseOrigin(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ETrackingUniverseOrigin::ETrackingUniverseOrigin()   {
}
constexpr ::OVR::OpenVR::ETrackingUniverseOrigin  OVR::OpenVR::ETrackingUniverseOrigin::TrackingUniverseSeated{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETrackingUniverseOrigin  OVR::OpenVR::ETrackingUniverseOrigin::TrackingUniverseStanding{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackingUniverseOrigin  OVR::OpenVR::ETrackingUniverseOrigin::TrackingUniverseRawAndUncalibrated{static_cast<int32_t>(0x2)};
