#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Process_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Process_t_def.hpp"
// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "oldPid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bForced", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Process_t::VREvent_Process_t(uint32_t  pid, uint32_t  oldPid, bool  bForced) noexcept  {
this->pid = pid;
this->oldPid = oldPid;
this->bForced = bForced;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Process_t::VREvent_Process_t()   {
}
