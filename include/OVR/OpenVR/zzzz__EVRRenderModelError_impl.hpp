#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRRenderModelError.hpp"
#include "OVR/OpenVR/zzzz__EVRRenderModelError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRRenderModelError::EVRRenderModelError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRRenderModelError::EVRRenderModelError()   {
}
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::Loading{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::NotSupported{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::InvalidArg{static_cast<int32_t>(0x12c)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::InvalidModel{static_cast<int32_t>(0x12d)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::NoShapes{static_cast<int32_t>(0x12e)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::MultipleShapes{static_cast<int32_t>(0x12f)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::TooManyVertices{static_cast<int32_t>(0x130)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::MultipleTextures{static_cast<int32_t>(0x131)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::BufferTooSmall{static_cast<int32_t>(0x132)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::NotEnoughNormals{static_cast<int32_t>(0x133)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::NotEnoughTexCoords{static_cast<int32_t>(0x134)};
constexpr ::OVR::OpenVR::EVRRenderModelError  OVR::OpenVR::EVRRenderModelError::InvalidTexture{static_cast<int32_t>(0x190)};
