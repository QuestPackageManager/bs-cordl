#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRTrackedCameraFrameLayout.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout::EVRTrackedCameraFrameLayout(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout::EVRTrackedCameraFrameLayout()   {
}
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::Mono{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::Stereo{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::VerticalLayout{static_cast<int32_t>(0x10)};
constexpr ::OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::HorizontalLayout{static_cast<int32_t>(0x20)};
