#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRMouseButton.hpp"
#include "OVR/OpenVR/zzzz__EVRMouseButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRMouseButton::EVRMouseButton(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRMouseButton::EVRMouseButton()   {
}
constexpr ::OVR::OpenVR::EVRMouseButton  OVR::OpenVR::EVRMouseButton::Left{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRMouseButton  OVR::OpenVR::EVRMouseButton::Right{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRMouseButton  OVR::OpenVR::EVRMouseButton::Middle{static_cast<int32_t>(0x4)};
