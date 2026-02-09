#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETrackedControllerRole.hpp"
#include "OVR/OpenVR/zzzz__ETrackedControllerRole_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackedControllerRole::ETrackedControllerRole(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ETrackedControllerRole::ETrackedControllerRole()   {
}
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::Invalid{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::LeftHand{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::RightHand{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::OptOut{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::Max{static_cast<int32_t>(0x4)};
