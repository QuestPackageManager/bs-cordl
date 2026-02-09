#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRApplicationType.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationType::EVRApplicationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRApplicationType::EVRApplicationType()   {
}
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Other{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Scene{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Overlay{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Background{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Utility{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_VRMonitor{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_SteamWatchdog{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Bootstrapper{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::EVRApplicationType  OVR::OpenVR::EVRApplicationType::VRApplication_Max{static_cast<int32_t>(0x8)};
