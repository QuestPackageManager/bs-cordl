#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSkeletalTransformSpace.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalTransformSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSkeletalTransformSpace::EVRSkeletalTransformSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRSkeletalTransformSpace::EVRSkeletalTransformSpace()   {
}
constexpr ::OVR::OpenVR::EVRSkeletalTransformSpace  OVR::OpenVR::EVRSkeletalTransformSpace::Model{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRSkeletalTransformSpace  OVR::OpenVR::EVRSkeletalTransformSpace::Parent{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRSkeletalTransformSpace  OVR::OpenVR::EVRSkeletalTransformSpace::Additive{static_cast<int32_t>(0x2)};
