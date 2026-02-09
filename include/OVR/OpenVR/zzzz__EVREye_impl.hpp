#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVREye.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVREye::EVREye(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVREye::EVREye()   {
}
constexpr ::OVR::OpenVR::EVREye  OVR::OpenVR::EVREye::Eye_Left{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVREye  OVR::OpenVR::EVREye::Eye_Right{static_cast<int32_t>(0x1)};
