#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRApplicationProperty.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationProperty::EVRApplicationProperty(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRApplicationProperty::EVRApplicationProperty()   {
}
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::Name_String{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::LaunchType_String{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::WorkingDirectory_String{static_cast<int32_t>(0xc)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::BinaryPath_String{static_cast<int32_t>(0xd)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::Arguments_String{static_cast<int32_t>(0xe)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::URL_String{static_cast<int32_t>(0xf)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::Description_String{static_cast<int32_t>(0x32)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::NewsURL_String{static_cast<int32_t>(0x33)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::ImagePath_String{static_cast<int32_t>(0x34)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::Source_String{static_cast<int32_t>(0x35)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::ActionManifestURL_String{static_cast<int32_t>(0x36)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::IsDashboardOverlay_Bool{static_cast<int32_t>(0x3c)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::IsTemplate_Bool{static_cast<int32_t>(0x3d)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::IsInstanced_Bool{static_cast<int32_t>(0x3e)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::IsInternal_Bool{static_cast<int32_t>(0x3f)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::WantsCompositorPauseInStandby_Bool{static_cast<int32_t>(0x40)};
constexpr ::OVR::OpenVR::EVRApplicationProperty  OVR::OpenVR::EVRApplicationProperty::LastLaunchTime_Uint64{static_cast<int32_t>(0x46)};
