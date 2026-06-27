#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSubmitFlags.hpp"
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSubmitFlags::EVRSubmitFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRSubmitFlags::EVRSubmitFlags()   {
}
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_Default{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_LensDistortionAlreadyApplied{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_GlRenderBuffer{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_Reserved{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_TextureWithPose{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::EVRSubmitFlags  OVR::OpenVR::EVRSubmitFlags::Submit_TextureWithDepth{static_cast<int32_t>(0x10)};
