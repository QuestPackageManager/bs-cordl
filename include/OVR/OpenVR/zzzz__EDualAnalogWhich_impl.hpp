#pragma once
// IWYU pragma private; include "OVR/OpenVR/EDualAnalogWhich.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EDualAnalogWhich::EDualAnalogWhich(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EDualAnalogWhich::EDualAnalogWhich()   {
}
constexpr ::OVR::OpenVR::EDualAnalogWhich  OVR::OpenVR::EDualAnalogWhich::k_EDualAnalog_Left{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EDualAnalogWhich  OVR::OpenVR::EDualAnalogWhich::k_EDualAnalog_Right{static_cast<int32_t>(0x1)};
