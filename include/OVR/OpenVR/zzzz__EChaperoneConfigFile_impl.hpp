#pragma once
// IWYU pragma private; include "OVR/OpenVR/EChaperoneConfigFile.hpp"
#include "OVR/OpenVR/zzzz__EChaperoneConfigFile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EChaperoneConfigFile::EChaperoneConfigFile(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EChaperoneConfigFile::EChaperoneConfigFile()   {
}
constexpr ::OVR::OpenVR::EChaperoneConfigFile  OVR::OpenVR::EChaperoneConfigFile::Live{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EChaperoneConfigFile  OVR::OpenVR::EChaperoneConfigFile::Temp{static_cast<int32_t>(0x2)};
