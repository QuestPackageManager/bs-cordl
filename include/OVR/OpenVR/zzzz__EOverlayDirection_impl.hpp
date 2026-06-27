#pragma once
// IWYU pragma private; include "OVR/OpenVR/EOverlayDirection.hpp"
#include "OVR/OpenVR/zzzz__EOverlayDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EOverlayDirection::EOverlayDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EOverlayDirection::EOverlayDirection()   {
}
constexpr ::OVR::OpenVR::EOverlayDirection  OVR::OpenVR::EOverlayDirection::Up{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EOverlayDirection  OVR::OpenVR::EOverlayDirection::Down{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EOverlayDirection  OVR::OpenVR::EOverlayDirection::Left{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EOverlayDirection  OVR::OpenVR::EOverlayDirection::Right{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EOverlayDirection  OVR::OpenVR::EOverlayDirection::Count{static_cast<int32_t>(0x4)};
