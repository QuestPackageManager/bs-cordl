#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRApplicationError.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationError::EVRApplicationError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRApplicationError::EVRApplicationError()   {
}
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::AppKeyAlreadyExists{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::NoManifest{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::NoApplication{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidIndex{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::UnknownApplication{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::IPCFailed{static_cast<int32_t>(0x69)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::ApplicationAlreadyRunning{static_cast<int32_t>(0x6a)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidManifest{static_cast<int32_t>(0x6b)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidApplication{static_cast<int32_t>(0x6c)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::LaunchFailed{static_cast<int32_t>(0x6d)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::ApplicationAlreadyStarting{static_cast<int32_t>(0x6e)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::LaunchInProgress{static_cast<int32_t>(0x6f)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::OldApplicationQuitting{static_cast<int32_t>(0x70)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::TransitionAborted{static_cast<int32_t>(0x71)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::IsTemplate{static_cast<int32_t>(0x72)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::SteamVRIsExiting{static_cast<int32_t>(0x73)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::BufferTooSmall{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::PropertyNotSet{static_cast<int32_t>(0xc9)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::UnknownProperty{static_cast<int32_t>(0xca)};
constexpr ::OVR::OpenVR::EVRApplicationError  OVR::OpenVR::EVRApplicationError::InvalidParameter{static_cast<int32_t>(0xcb)};
