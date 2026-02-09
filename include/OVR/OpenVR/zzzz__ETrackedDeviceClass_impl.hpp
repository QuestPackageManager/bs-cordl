#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETrackedDeviceClass.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceClass_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackedDeviceClass::ETrackedDeviceClass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ETrackedDeviceClass::ETrackedDeviceClass()   {
}
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::Invalid{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::HMD{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::Controller{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::GenericTracker{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::TrackingReference{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::DisplayRedirect{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  OVR::OpenVR::ETrackedDeviceClass::Max{static_cast<int32_t>(0x6)};
