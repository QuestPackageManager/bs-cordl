#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVROverlayError.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVROverlayError::EVROverlayError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVROverlayError::EVROverlayError()   {
}
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::UnknownOverlay{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::InvalidHandle{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::PermissionDenied{static_cast<int32_t>(0xc)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::OverlayLimitExceeded{static_cast<int32_t>(0xd)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::WrongVisibilityType{static_cast<int32_t>(0xe)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::KeyTooLong{static_cast<int32_t>(0xf)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::NameTooLong{static_cast<int32_t>(0x10)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::KeyInUse{static_cast<int32_t>(0x11)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::WrongTransformType{static_cast<int32_t>(0x12)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::InvalidTrackedDevice{static_cast<int32_t>(0x13)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::InvalidParameter{static_cast<int32_t>(0x14)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::ThumbnailCantBeDestroyed{static_cast<int32_t>(0x15)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::ArrayTooSmall{static_cast<int32_t>(0x16)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::RequestFailed{static_cast<int32_t>(0x17)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::InvalidTexture{static_cast<int32_t>(0x18)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::UnableToLoadFile{static_cast<int32_t>(0x19)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::KeyboardAlreadyInUse{static_cast<int32_t>(0x1a)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::NoNeighbor{static_cast<int32_t>(0x1b)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::TooManyMaskPrimitives{static_cast<int32_t>(0x1d)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::BadMaskPrimitive{static_cast<int32_t>(0x1e)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::TextureAlreadyLocked{static_cast<int32_t>(0x1f)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::TextureLockCapacityReached{static_cast<int32_t>(0x20)};
constexpr ::OVR::OpenVR::EVROverlayError  OVR::OpenVR::EVROverlayError::TextureNotLocked{static_cast<int32_t>(0x21)};
