#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_HapticVibration_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_HapticVibration_t_def.hpp"
// Ctor Parameters [CppParam { name: "containerHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "componentHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fDurationSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fFrequency", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fAmplitude", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_HapticVibration_t::VREvent_HapticVibration_t(uint64_t  containerHandle, uint64_t  componentHandle, float_t  fDurationSeconds, float_t  fFrequency, float_t  fAmplitude) noexcept  {
this->containerHandle = containerHandle;
this->componentHandle = componentHandle;
this->fDurationSeconds = fDurationSeconds;
this->fFrequency = fFrequency;
this->fAmplitude = fAmplitude;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_HapticVibration_t::VREvent_HapticVibration_t()   {
}
