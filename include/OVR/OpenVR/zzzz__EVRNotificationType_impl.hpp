#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRNotificationType.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRNotificationType::EVRNotificationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRNotificationType::EVRNotificationType()   {
}
constexpr ::OVR::OpenVR::EVRNotificationType  OVR::OpenVR::EVRNotificationType::Transient{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRNotificationType  OVR::OpenVR::EVRNotificationType::Persistent{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRNotificationType  OVR::OpenVR::EVRNotificationType::Transient_SystemWithUserValue{static_cast<int32_t>(0x2)};
