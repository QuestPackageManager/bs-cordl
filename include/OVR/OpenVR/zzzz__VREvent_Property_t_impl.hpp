#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Property_t.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Property_t_def.hpp"
// Ctor Parameters [CppParam { name: "container", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prop", ty: "::OVR::OpenVR::ETrackedDeviceProperty", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Property_t::VREvent_Property_t(uint64_t  container, ::OVR::OpenVR::ETrackedDeviceProperty  prop) noexcept  {
this->container = container;
this->prop = prop;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Property_t::VREvent_Property_t()   {
}
