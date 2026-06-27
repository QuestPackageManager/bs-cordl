#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRMuraCorrectionMode.hpp"
#include "OVR/OpenVR/zzzz__EVRMuraCorrectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRMuraCorrectionMode::EVRMuraCorrectionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRMuraCorrectionMode::EVRMuraCorrectionMode()   {
}
constexpr ::OVR::OpenVR::EVRMuraCorrectionMode  OVR::OpenVR::EVRMuraCorrectionMode::Default{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRMuraCorrectionMode  OVR::OpenVR::EVRMuraCorrectionMode::NoCorrection{static_cast<int32_t>(0x1)};
