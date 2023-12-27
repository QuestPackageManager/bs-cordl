#pragma once
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VRPlatformSDK::VRPlatformSDK(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRPlatformSDK::VRPlatformSDK() {}
constexpr ::GlobalNamespace::VRPlatformSDK GlobalNamespace::VRPlatformSDK::OpenXR{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::VRPlatformSDK GlobalNamespace::VRPlatformSDK::Oculus{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::VRPlatformSDK GlobalNamespace::VRPlatformSDK::Unknown{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
