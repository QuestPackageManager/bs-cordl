#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETrackingResult.hpp"
#include "OVR/OpenVR/zzzz__ETrackingResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackingResult::ETrackingResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ETrackingResult::ETrackingResult()   {
}
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Uninitialized{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Calibrating_InProgress{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Calibrating_OutOfRange{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Running_OK{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Running_OutOfRange{static_cast<int32_t>(0xc9)};
