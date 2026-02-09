#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRCompositorError.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRCompositorError::EVRCompositorError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRCompositorError::EVRCompositorError()   {
}
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::RequestFailed{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::IncompatibleVersion{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::DoNotHaveFocus{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::InvalidTexture{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::IsNotSceneApplication{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::TextureIsOnWrongDevice{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::TextureUsesUnsupportedFormat{static_cast<int32_t>(0x69)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::SharedTexturesNotSupported{static_cast<int32_t>(0x6a)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::IndexOutOfRange{static_cast<int32_t>(0x6b)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::AlreadySubmitted{static_cast<int32_t>(0x6c)};
constexpr ::OVR::OpenVR::EVRCompositorError  OVR::OpenVR::EVRCompositorError::InvalidBounds{static_cast<int32_t>(0x6d)};
