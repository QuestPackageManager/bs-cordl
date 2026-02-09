#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Reserved_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Reserved_t_def.hpp"
// Ctor Parameters [CppParam { name: "reserved0", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved3", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Reserved_t::VREvent_Reserved_t(uint64_t  reserved0, uint64_t  reserved1, uint64_t  reserved2, uint64_t  reserved3) noexcept  {
this->reserved0 = reserved0;
this->reserved1 = reserved1;
this->reserved2 = reserved2;
this->reserved3 = reserved3;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Reserved_t::VREvent_Reserved_t()   {
}
