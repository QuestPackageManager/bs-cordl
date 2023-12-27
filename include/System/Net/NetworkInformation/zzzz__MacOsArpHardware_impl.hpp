#pragma once
#include "System/Net/NetworkInformation/zzzz__MacOsArpHardware_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::MacOsArpHardware::MacOsArpHardware(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsArpHardware::MacOsArpHardware() {}
constexpr ::System::Net::NetworkInformation::MacOsArpHardware System::Net::NetworkInformation::MacOsArpHardware::ETHER{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::NetworkInformation::MacOsArpHardware System::Net::NetworkInformation::MacOsArpHardware::ATM{ static_cast<int32_t>(0x25) };
constexpr ::System::Net::NetworkInformation::MacOsArpHardware System::Net::NetworkInformation::MacOsArpHardware::SLIP{ static_cast<int32_t>(0x1c) };
constexpr ::System::Net::NetworkInformation::MacOsArpHardware System::Net::NetworkInformation::MacOsArpHardware::PPP{ static_cast<int32_t>(0x17) };
constexpr ::System::Net::NetworkInformation::MacOsArpHardware System::Net::NetworkInformation::MacOsArpHardware::LOOPBACK{ static_cast<int32_t>(0x18) };
constexpr ::System::Net::NetworkInformation::MacOsArpHardware System::Net::NetworkInformation::MacOsArpHardware::FDDI{ static_cast<int32_t>(0xf) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
