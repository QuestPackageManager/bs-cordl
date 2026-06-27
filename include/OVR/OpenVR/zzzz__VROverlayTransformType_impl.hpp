#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayTransformType.hpp"
#include "OVR/OpenVR/zzzz__VROverlayTransformType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayTransformType::VROverlayTransformType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VROverlayTransformType::VROverlayTransformType()   {
}
constexpr ::OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_Absolute{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_TrackedDeviceRelative{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_SystemOverlay{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_TrackedComponent{static_cast<int32_t>(0x3)};
