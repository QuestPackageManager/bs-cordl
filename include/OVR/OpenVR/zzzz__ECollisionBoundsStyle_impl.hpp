#pragma once
// IWYU pragma private; include "OVR/OpenVR/ECollisionBoundsStyle.hpp"
#include "OVR/OpenVR/zzzz__ECollisionBoundsStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ECollisionBoundsStyle::ECollisionBoundsStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ECollisionBoundsStyle::ECollisionBoundsStyle()   {
}
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_BEGINNER{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_INTERMEDIATE{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_SQUARES{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_ADVANCED{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_NONE{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_COUNT{static_cast<int32_t>(0x5)};
