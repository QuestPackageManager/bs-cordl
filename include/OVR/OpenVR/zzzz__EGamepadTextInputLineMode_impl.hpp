#pragma once
// IWYU pragma private; include "OVR/OpenVR/EGamepadTextInputLineMode.hpp"
#include "OVR/OpenVR/zzzz__EGamepadTextInputLineMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EGamepadTextInputLineMode::EGamepadTextInputLineMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EGamepadTextInputLineMode::EGamepadTextInputLineMode()   {
}
constexpr ::OVR::OpenVR::EGamepadTextInputLineMode  OVR::OpenVR::EGamepadTextInputLineMode::k_EGamepadTextInputLineModeSingleLine{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EGamepadTextInputLineMode  OVR::OpenVR::EGamepadTextInputLineMode::k_EGamepadTextInputLineModeMultipleLines{static_cast<int32_t>(0x1)};
