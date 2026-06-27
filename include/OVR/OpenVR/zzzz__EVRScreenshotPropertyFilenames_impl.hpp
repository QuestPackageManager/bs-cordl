#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRScreenshotPropertyFilenames.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotPropertyFilenames_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRScreenshotPropertyFilenames::EVRScreenshotPropertyFilenames(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRScreenshotPropertyFilenames::EVRScreenshotPropertyFilenames()   {
}
constexpr ::OVR::OpenVR::EVRScreenshotPropertyFilenames  OVR::OpenVR::EVRScreenshotPropertyFilenames::Preview{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRScreenshotPropertyFilenames  OVR::OpenVR::EVRScreenshotPropertyFilenames::VR{static_cast<int32_t>(0x1)};
