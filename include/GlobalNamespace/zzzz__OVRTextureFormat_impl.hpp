#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTextureFormat.hpp"
#include "GlobalNamespace/zzzz__OVRTextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTextureFormat::OVRTextureFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTextureFormat::OVRTextureFormat()   {
}
constexpr ::GlobalNamespace::OVRTextureFormat  GlobalNamespace::OVRTextureFormat::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRTextureFormat  GlobalNamespace::OVRTextureFormat::KTX2{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRTextureFormat  GlobalNamespace::OVRTextureFormat::PNG{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRTextureFormat  GlobalNamespace::OVRTextureFormat::JPEG{static_cast<int32_t>(0x3)};
