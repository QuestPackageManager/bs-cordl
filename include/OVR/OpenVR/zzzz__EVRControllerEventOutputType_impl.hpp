#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRControllerEventOutputType.hpp"
#include "OVR/OpenVR/zzzz__EVRControllerEventOutputType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRControllerEventOutputType::EVRControllerEventOutputType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRControllerEventOutputType::EVRControllerEventOutputType()   {
}
constexpr ::OVR::OpenVR::EVRControllerEventOutputType  OVR::OpenVR::EVRControllerEventOutputType::ControllerEventOutput_OSEvents{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRControllerEventOutputType  OVR::OpenVR::EVRControllerEventOutputType::ControllerEventOutput_VREvents{static_cast<int32_t>(0x1)};
