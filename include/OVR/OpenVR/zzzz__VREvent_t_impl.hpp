#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Data_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
// Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_t::VREvent_t(uint32_t  eventType, uint32_t  trackedDeviceIndex, float_t  eventAgeSeconds, ::OVR::OpenVR::VREvent_Data_t  data) noexcept  {
this->eventType = eventType;
this->trackedDeviceIndex = trackedDeviceIndex;
this->eventAgeSeconds = eventAgeSeconds;
this->data = data;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_t::VREvent_t()   {
}
