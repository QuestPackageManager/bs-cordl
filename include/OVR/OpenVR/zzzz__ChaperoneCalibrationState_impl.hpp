#pragma once
// IWYU pragma private; include "OVR/OpenVR/ChaperoneCalibrationState.hpp"
#include "OVR/OpenVR/zzzz__ChaperoneCalibrationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ChaperoneCalibrationState::ChaperoneCalibrationState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ChaperoneCalibrationState::ChaperoneCalibrationState()   {
}
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::OK{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_BaseStationMayHaveMoved{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_BaseStationRemoved{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_SeatedBoundsInvalid{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_BaseStationUninitialized{static_cast<int32_t>(0xc9)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_BaseStationConflict{static_cast<int32_t>(0xca)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_PlayAreaInvalid{static_cast<int32_t>(0xcb)};
constexpr ::OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_CollisionBoundsInvalid{static_cast<int32_t>(0xcc)};
