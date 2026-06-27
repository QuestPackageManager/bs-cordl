#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETextureType.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETextureType::ETextureType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ETextureType::ETextureType()   {
}
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::Invalid{static_cast<int32_t>(0xffffffff)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::DirectX{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::OpenGL{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::Vulkan{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::IOSurface{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::DirectX12{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::DXGISharedHandle{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::ETextureType  OVR::OpenVR::ETextureType::Metal{static_cast<int32_t>(0x6)};
