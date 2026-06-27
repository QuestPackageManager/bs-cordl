#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSpatialAnchorError.hpp"
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSpatialAnchorError::EVRSpatialAnchorError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRSpatialAnchorError::EVRSpatialAnchorError()   {
}
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Success{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Internal{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::UnknownHandle{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::ArrayTooSmall{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::InvalidDescriptorChar{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NotYetAvailable{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NotAvailableInThisUniverse{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::PermanentlyUnavailable{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::WrongDriver{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::DescriptorTooLong{static_cast<int32_t>(0x9)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Unknown{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NoRoomCalibration{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::InvalidArgument{static_cast<int32_t>(0xc)};
constexpr ::OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::UnknownDriver{static_cast<int32_t>(0xd)};
