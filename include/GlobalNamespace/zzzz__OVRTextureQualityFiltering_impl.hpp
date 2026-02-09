#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTextureQualityFiltering.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTextureQualityFiltering::OVRTextureQualityFiltering(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTextureQualityFiltering::OVRTextureQualityFiltering()   {
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Bilinear{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Trilinear{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso2x{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso4x{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso8x{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  GlobalNamespace::OVRTextureQualityFiltering::Aniso16x{static_cast<int32_t>(0x5)};
