#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRControllerAxisType.hpp"
#include "OVR/OpenVR/zzzz__EVRControllerAxisType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRControllerAxisType::EVRControllerAxisType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRControllerAxisType::EVRControllerAxisType()   {
}
constexpr ::OVR::OpenVR::EVRControllerAxisType  OVR::OpenVR::EVRControllerAxisType::k_eControllerAxis_None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRControllerAxisType  OVR::OpenVR::EVRControllerAxisType::k_eControllerAxis_TrackPad{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRControllerAxisType  OVR::OpenVR::EVRControllerAxisType::k_eControllerAxis_Joystick{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRControllerAxisType  OVR::OpenVR::EVRControllerAxisType::k_eControllerAxis_Trigger{static_cast<int32_t>(0x3)};
