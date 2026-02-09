#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRNotificationError.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRNotificationError::EVRNotificationError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRNotificationError::EVRNotificationError()   {
}
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::OK{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::InvalidNotificationId{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::NotificationQueueFull{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::InvalidOverlayHandle{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRNotificationError  OVR::OpenVR::EVRNotificationError::SystemWithUserValueAlreadyExists{static_cast<int32_t>(0x67)};
