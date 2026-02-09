#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRTrackedCameraFrameType.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType::EVRTrackedCameraFrameType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType::EVRTrackedCameraFrameType()   {
}
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::Distorted{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::Undistorted{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::MaximumUndistorted{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameType  OVR::OpenVR::EVRTrackedCameraFrameType::MAX_CAMERA_FRAME_TYPES{static_cast<int32_t>(0x3)};
