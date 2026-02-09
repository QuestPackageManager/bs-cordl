#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETrackedPropertyError.hpp"
#include "OVR/OpenVR/zzzz__ETrackedPropertyError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackedPropertyError::ETrackedPropertyError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ETrackedPropertyError::ETrackedPropertyError()   {
}
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_Success{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_WrongDataType{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_WrongDeviceClass{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_BufferTooSmall{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_UnknownProperty{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_InvalidDevice{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_CouldNotContactServer{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_ValueNotProvidedByDevice{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_StringExceedsMaximumLength{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_NotYetAvailable{static_cast<int32_t>(0x9)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_PermissionDenied{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_InvalidOperation{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::ETrackedPropertyError  OVR::OpenVR::ETrackedPropertyError::TrackedProp_CannotWriteToWildcards{static_cast<int32_t>(0xc)};
