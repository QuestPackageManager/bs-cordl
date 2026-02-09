#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_InputActionManifestLoad_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_InputActionManifestLoad_t_def.hpp"
// Ctor Parameters [CppParam { name: "pathAppKey", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessageParam", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathManifestPath", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::VREvent_InputActionManifestLoad_t(uint64_t  pathAppKey, uint64_t  pathMessage, uint64_t  pathMessageParam, uint64_t  pathManifestPath) noexcept  {
this->pathAppKey = pathAppKey;
this->pathMessage = pathMessage;
this->pathMessageParam = pathMessageParam;
this->pathManifestPath = pathManifestPath;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::VREvent_InputActionManifestLoad_t()   {
}
