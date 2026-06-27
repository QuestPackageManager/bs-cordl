#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayInputMethod.hpp"
#include "OVR/OpenVR/zzzz__VROverlayInputMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayInputMethod::VROverlayInputMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VROverlayInputMethod::VROverlayInputMethod()   {
}
constexpr ::OVR::OpenVR::VROverlayInputMethod  OVR::OpenVR::VROverlayInputMethod::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::VROverlayInputMethod  OVR::OpenVR::VROverlayInputMethod::Mouse{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::VROverlayInputMethod  OVR::OpenVR::VROverlayInputMethod::DualAnalog{static_cast<int32_t>(0x2)};
