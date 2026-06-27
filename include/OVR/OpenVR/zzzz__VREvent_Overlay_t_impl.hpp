#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Overlay_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Overlay_t_def.hpp"
// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Overlay_t::VREvent_Overlay_t(uint64_t  overlayHandle, uint64_t  devicePath) noexcept  {
this->overlayHandle = overlayHandle;
this->devicePath = devicePath;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Overlay_t::VREvent_Overlay_t()   {
}
