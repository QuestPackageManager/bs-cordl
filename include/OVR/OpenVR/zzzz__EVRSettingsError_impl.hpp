#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSettingsError.hpp"
#include "OVR/OpenVR/zzzz__EVRSettingsError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSettingsError::EVRSettingsError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRSettingsError::EVRSettingsError()   {
}
constexpr ::OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::IPCFailed{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::WriteFailed{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::ReadFailed{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::JsonParseFailed{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::UnsetSettingHasNoDefault{static_cast<int32_t>(0x5)};
