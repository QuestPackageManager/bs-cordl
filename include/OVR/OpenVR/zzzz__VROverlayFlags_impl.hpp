#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayFlags.hpp"
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayFlags::VROverlayFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VROverlayFlags::VROverlayFlags()   {
}
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::Curved{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::RGSS4X{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::NoDashboardTab{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::AcceptsGamepadEvents{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::ShowGamepadFocus{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SendVRScrollEvents{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SendVRTouchpadEvents{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::ShowTouchPadScrollWheel{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::TransferOwnershipToInternalProcess{static_cast<int32_t>(0x9)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SideBySide_Parallel{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SideBySide_Crossed{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::Panorama{static_cast<int32_t>(0xc)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::StereoPanorama{static_cast<int32_t>(0xd)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::SortWithNonSceneOverlays{static_cast<int32_t>(0xe)};
constexpr ::OVR::OpenVR::VROverlayFlags  OVR::OpenVR::VROverlayFlags::VisibleInDashboard{static_cast<int32_t>(0xf)};
