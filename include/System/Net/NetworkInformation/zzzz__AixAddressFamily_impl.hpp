#pragma once
#include "System/Net/NetworkInformation/zzzz__AixAddressFamily_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixAddressFamily::AixAddressFamily(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixAddressFamily::AixAddressFamily() {}
constexpr ::System::Net::NetworkInformation::AixAddressFamily System::Net::NetworkInformation::AixAddressFamily::AF_INET{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::NetworkInformation::AixAddressFamily System::Net::NetworkInformation::AixAddressFamily::AF_INET6{ static_cast<int32_t>(0x18) };
constexpr ::System::Net::NetworkInformation::AixAddressFamily System::Net::NetworkInformation::AixAddressFamily::AF_LINK{ static_cast<int32_t>(0x12) };
