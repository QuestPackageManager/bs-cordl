#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Screenshot_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Screenshot_t_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Screenshot_t::VREvent_Screenshot_t(uint32_t  handle, uint32_t  type) noexcept  {
this->handle = handle;
this->type = type;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Screenshot_t::VREvent_Screenshot_t()   {
}
