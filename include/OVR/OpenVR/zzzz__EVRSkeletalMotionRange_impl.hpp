#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSkeletalMotionRange.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalMotionRange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSkeletalMotionRange::EVRSkeletalMotionRange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRSkeletalMotionRange::EVRSkeletalMotionRange()   {
}
constexpr ::OVR::OpenVR::EVRSkeletalMotionRange  OVR::OpenVR::EVRSkeletalMotionRange::WithController{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRSkeletalMotionRange  OVR::OpenVR::EVRSkeletalMotionRange::WithoutController{static_cast<int32_t>(0x1)};
