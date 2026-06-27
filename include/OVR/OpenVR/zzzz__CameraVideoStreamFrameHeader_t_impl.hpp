#pragma once
// IWYU pragma private; include "OVR/OpenVR/CameraVideoStreamFrameHeader_t.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_impl.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_impl.hpp"
#include "OVR/OpenVR/zzzz__CameraVideoStreamFrameHeader_t_def.hpp"
// Ctor Parameters [CppParam { name: "eFrameType", ty: "::OVR::OpenVR::EVRTrackedCameraFrameType", modifiers: "", def_value: Some("{}") }, CppParam { name: "nWidth", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nHeight", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nBytesPerPixel", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nFrameSequence", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "standingTrackedDevicePose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CameraVideoStreamFrameHeader_t::CameraVideoStreamFrameHeader_t(::OVR::OpenVR::EVRTrackedCameraFrameType  eFrameType, uint32_t  nWidth, uint32_t  nHeight, uint32_t  nBytesPerPixel, uint32_t  nFrameSequence, ::OVR::OpenVR::TrackedDevicePose_t  standingTrackedDevicePose) noexcept  {
this->eFrameType = eFrameType;
this->nWidth = nWidth;
this->nHeight = nHeight;
this->nBytesPerPixel = nBytesPerPixel;
this->nFrameSequence = nFrameSequence;
this->standingTrackedDevicePose = standingTrackedDevicePose;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CameraVideoStreamFrameHeader_t::CameraVideoStreamFrameHeader_t()   {
}
