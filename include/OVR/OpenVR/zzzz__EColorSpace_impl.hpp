#pragma once
// IWYU pragma private; include "OVR/OpenVR/EColorSpace.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EColorSpace::EColorSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EColorSpace::EColorSpace()   {
}
constexpr ::OVR::OpenVR::EColorSpace  OVR::OpenVR::EColorSpace::Auto{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EColorSpace  OVR::OpenVR::EColorSpace::Gamma{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EColorSpace  OVR::OpenVR::EColorSpace::Linear{static_cast<int32_t>(0x2)};
