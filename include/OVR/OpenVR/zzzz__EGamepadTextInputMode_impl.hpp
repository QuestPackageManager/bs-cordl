#pragma once
// IWYU pragma private; include "OVR/OpenVR/EGamepadTextInputMode.hpp"
#include "OVR/OpenVR/zzzz__EGamepadTextInputMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EGamepadTextInputMode::EGamepadTextInputMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EGamepadTextInputMode::EGamepadTextInputMode()   {
}
constexpr ::OVR::OpenVR::EGamepadTextInputMode  OVR::OpenVR::EGamepadTextInputMode::k_EGamepadTextInputModeNormal{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EGamepadTextInputMode  OVR::OpenVR::EGamepadTextInputMode::k_EGamepadTextInputModePassword{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EGamepadTextInputMode  OVR::OpenVR::EGamepadTextInputMode::k_EGamepadTextInputModeSubmit{static_cast<int32_t>(0x2)};
