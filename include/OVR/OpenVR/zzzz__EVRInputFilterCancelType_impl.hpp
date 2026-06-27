#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRInputFilterCancelType.hpp"
#include "OVR/OpenVR/zzzz__EVRInputFilterCancelType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRInputFilterCancelType::EVRInputFilterCancelType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRInputFilterCancelType::EVRInputFilterCancelType()   {
}
constexpr ::OVR::OpenVR::EVRInputFilterCancelType  OVR::OpenVR::EVRInputFilterCancelType::VRInputFilterCancel_Timers{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRInputFilterCancelType  OVR::OpenVR::EVRInputFilterCancelType::VRInputFilterCancel_Momentum{static_cast<int32_t>(0x1)};
