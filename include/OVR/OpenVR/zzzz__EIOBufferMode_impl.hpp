#pragma once
// IWYU pragma private; include "OVR/OpenVR/EIOBufferMode.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EIOBufferMode::EIOBufferMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EIOBufferMode::EIOBufferMode()   {
}
constexpr ::OVR::OpenVR::EIOBufferMode  OVR::OpenVR::EIOBufferMode::Read{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EIOBufferMode  OVR::OpenVR::EIOBufferMode::Write{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EIOBufferMode  OVR::OpenVR::EIOBufferMode::Create{static_cast<int32_t>(0x200)};
