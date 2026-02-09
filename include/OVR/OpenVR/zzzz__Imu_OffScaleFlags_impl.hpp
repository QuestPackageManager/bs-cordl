#pragma once
// IWYU pragma private; include "OVR/OpenVR/Imu_OffScaleFlags.hpp"
#include "OVR/OpenVR/zzzz__Imu_OffScaleFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Imu_OffScaleFlags::Imu_OffScaleFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::Imu_OffScaleFlags::Imu_OffScaleFlags()   {
}
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelX{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelY{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelZ{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroX{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroY{static_cast<int32_t>(0x10)};
constexpr ::OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroZ{static_cast<int32_t>(0x20)};
