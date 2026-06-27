#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVSync.hpp"
#include "OVR/OpenVR/zzzz__EVSync_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVSync::EVSync(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVSync::EVSync()   {
}
constexpr ::OVR::OpenVR::EVSync  OVR::OpenVR::EVSync::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVSync  OVR::OpenVR::EVSync::WaitRender{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVSync  OVR::OpenVR::EVSync::NoWaitRender{static_cast<int32_t>(0x2)};
