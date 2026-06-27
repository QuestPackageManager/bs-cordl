#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRScreenshotType.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRScreenshotType::EVRScreenshotType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRScreenshotType::EVRScreenshotType()   {
}
constexpr ::OVR::OpenVR::EVRScreenshotType  OVR::OpenVR::EVRScreenshotType::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRScreenshotType  OVR::OpenVR::EVRScreenshotType::Mono{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRScreenshotType  OVR::OpenVR::EVRScreenshotType::Stereo{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRScreenshotType  OVR::OpenVR::EVRScreenshotType::Cubemap{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRScreenshotType  OVR::OpenVR::EVRScreenshotType::MonoPanorama{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRScreenshotType  OVR::OpenVR::EVRScreenshotType::StereoPanorama{static_cast<int32_t>(0x5)};
