#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_ApplicationLaunch_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_ApplicationLaunch_t_def.hpp"
// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unArgsHandle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_ApplicationLaunch_t::VREvent_ApplicationLaunch_t(uint32_t  pid, uint32_t  unArgsHandle) noexcept  {
this->pid = pid;
this->unArgsHandle = unArgsHandle;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_ApplicationLaunch_t::VREvent_ApplicationLaunch_t()   {
}
