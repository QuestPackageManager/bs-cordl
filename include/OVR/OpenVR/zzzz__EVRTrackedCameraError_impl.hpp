#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRTrackedCameraError.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRTrackedCameraError::EVRTrackedCameraError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRTrackedCameraError::EVRTrackedCameraError()   {
}
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::OperationFailed{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidHandle{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidFrameHeaderVersion{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::OutOfHandles{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::IPCFailure{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::NotSupportedForThisDevice{static_cast<int32_t>(0x69)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::SharedMemoryFailure{static_cast<int32_t>(0x6a)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::FrameBufferingFailure{static_cast<int32_t>(0x6b)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::StreamSetupFailure{static_cast<int32_t>(0x6c)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidGLTextureId{static_cast<int32_t>(0x6d)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidSharedTextureHandle{static_cast<int32_t>(0x6e)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::FailedToGetGLTextureId{static_cast<int32_t>(0x6f)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::SharedTextureFailure{static_cast<int32_t>(0x70)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::NoFrameAvailable{static_cast<int32_t>(0x71)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidArgument{static_cast<int32_t>(0x72)};
constexpr ::OVR::OpenVR::EVRTrackedCameraError  OVR::OpenVR::EVRTrackedCameraError::InvalidFrameBufferSize{static_cast<int32_t>(0x73)};
