#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRCompositorTimingMode.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRCompositorTimingMode::EVRCompositorTimingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRCompositorTimingMode::EVRCompositorTimingMode()   {
}
constexpr ::OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Implicit{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Explicit_RuntimePerformsPostPresentHandoff{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRCompositorTimingMode  OVR::OpenVR::EVRCompositorTimingMode::Explicit_ApplicationPerformsPostPresentHandoff{static_cast<int32_t>(0x2)};
