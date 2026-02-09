#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_InputBindingLoad_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_InputBindingLoad_t_def.hpp"
// Ctor Parameters [CppParam { name: "ulAppContainer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathUrl", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathControllerType", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_InputBindingLoad_t::VREvent_InputBindingLoad_t(uint64_t  ulAppContainer, uint64_t  pathMessage, uint64_t  pathUrl, uint64_t  pathControllerType) noexcept  {
this->ulAppContainer = ulAppContainer;
this->pathMessage = pathMessage;
this->pathUrl = pathUrl;
this->pathControllerType = pathControllerType;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_InputBindingLoad_t::VREvent_InputBindingLoad_t()   {
}
