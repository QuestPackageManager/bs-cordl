#pragma once
// IWYU pragma private; include "System/Net/Sockets/IPProtectionLevel.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::IPProtectionLevel::IPProtectionLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::IPProtectionLevel::IPProtectionLevel()   {
}
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::Unspecified{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::Unrestricted{static_cast<int32_t>(0xa)};
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::EdgeRestricted{static_cast<int32_t>(0x14)};
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::Restricted{static_cast<int32_t>(0x1e)};
