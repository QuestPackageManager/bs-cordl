#pragma once
// IWYU pragma private; include "OVR/OpenVR/EDeviceActivityLevel.hpp"
#include "OVR/OpenVR/zzzz__EDeviceActivityLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EDeviceActivityLevel::EDeviceActivityLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EDeviceActivityLevel::EDeviceActivityLevel()   {
}
constexpr ::OVR::OpenVR::EDeviceActivityLevel  OVR::OpenVR::EDeviceActivityLevel::k_EDeviceActivityLevel_Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::OVR::OpenVR::EDeviceActivityLevel  OVR::OpenVR::EDeviceActivityLevel::k_EDeviceActivityLevel_Idle{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EDeviceActivityLevel  OVR::OpenVR::EDeviceActivityLevel::k_EDeviceActivityLevel_UserInteraction{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EDeviceActivityLevel  OVR::OpenVR::EDeviceActivityLevel::k_EDeviceActivityLevel_UserInteraction_Timeout{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EDeviceActivityLevel  OVR::OpenVR::EDeviceActivityLevel::k_EDeviceActivityLevel_Standby{static_cast<int32_t>(0x3)};
