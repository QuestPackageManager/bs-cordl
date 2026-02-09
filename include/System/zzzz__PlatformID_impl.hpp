#pragma once
// IWYU pragma private; include "System/PlatformID.hpp"
#include "System/zzzz__PlatformID_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::PlatformID::PlatformID(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::PlatformID::PlatformID()   {
}
constexpr ::System::PlatformID  System::PlatformID::Win32S{static_cast<int32_t>(0x0)};
constexpr ::System::PlatformID  System::PlatformID::Win32Windows{static_cast<int32_t>(0x1)};
constexpr ::System::PlatformID  System::PlatformID::Win32NT{static_cast<int32_t>(0x2)};
constexpr ::System::PlatformID  System::PlatformID::WinCE{static_cast<int32_t>(0x3)};
constexpr ::System::PlatformID  System::PlatformID::Unix{static_cast<int32_t>(0x4)};
constexpr ::System::PlatformID  System::PlatformID::Xbox{static_cast<int32_t>(0x5)};
constexpr ::System::PlatformID  System::PlatformID::MacOSX{static_cast<int32_t>(0x6)};
