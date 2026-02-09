#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRScreenshotError.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRScreenshotError::EVRScreenshotError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRScreenshotError::EVRScreenshotError()   {
}
constexpr ::OVR::OpenVR::EVRScreenshotError  OVR::OpenVR::EVRScreenshotError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRScreenshotError  OVR::OpenVR::EVRScreenshotError::RequestFailed{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRScreenshotError  OVR::OpenVR::EVRScreenshotError::IncompatibleVersion{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRScreenshotError  OVR::OpenVR::EVRScreenshotError::NotFound{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRScreenshotError  OVR::OpenVR::EVRScreenshotError::BufferTooSmall{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRScreenshotError  OVR::OpenVR::EVRScreenshotError::ScreenshotAlreadyInProgress{static_cast<int32_t>(0x6c)};
