#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRFirmwareError.hpp"
#include "OVR/OpenVR/zzzz__EVRFirmwareError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRFirmwareError::EVRFirmwareError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRFirmwareError::EVRFirmwareError()   {
}
constexpr ::OVR::OpenVR::EVRFirmwareError  OVR::OpenVR::EVRFirmwareError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRFirmwareError  OVR::OpenVR::EVRFirmwareError::Success{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRFirmwareError  OVR::OpenVR::EVRFirmwareError::Fail{static_cast<int32_t>(0x2)};
