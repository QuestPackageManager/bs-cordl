#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRComponentProperty.hpp"
#include "OVR/OpenVR/zzzz__EVRComponentProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRComponentProperty::EVRComponentProperty(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRComponentProperty::EVRComponentProperty()   {
}
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsStatic{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsVisible{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsTouched{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsPressed{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsScrolled{static_cast<int32_t>(0x10)};
