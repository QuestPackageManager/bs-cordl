#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRNotificationStyle.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRNotificationStyle::EVRNotificationStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRNotificationStyle::EVRNotificationStyle()   {
}
constexpr ::OVR::OpenVR::EVRNotificationStyle  OVR::OpenVR::EVRNotificationStyle::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRNotificationStyle  OVR::OpenVR::EVRNotificationStyle::Application{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRNotificationStyle  OVR::OpenVR::EVRNotificationStyle::Contact_Disabled{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::EVRNotificationStyle  OVR::OpenVR::EVRNotificationStyle::Contact_Enabled{static_cast<int32_t>(0xc9)};
constexpr ::OVR::OpenVR::EVRNotificationStyle  OVR::OpenVR::EVRNotificationStyle::Contact_Active{static_cast<int32_t>(0xca)};
